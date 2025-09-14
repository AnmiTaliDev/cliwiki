#include "wikipedia.h"
#include <curl/curl.h>
#include <json/json.h>
#include <iostream>
#include <cstdlib>

namespace cliwiki {

size_t WikipediaSearchModule::WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *)userp;

    char *ptr = (char *)realloc(mem->memory, mem->size + realsize + 1);
    if (!ptr) {
        std::cerr << "Not enough memory (realloc returned NULL)\n";
        return 0;
    }

    mem->memory = ptr;
    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;

    return realsize;
}

void WikipediaSearchModule::initialize(const Config& /* config */) {
    // Initialize curl if needed
}

std::string WikipediaSearchModule::getName() const {
    return "Wikipedia Search Module";
}

std::string WikipediaSearchModule::search(const std::string& query, const std::string& language) {
    CURL *curl;
    CURLcode res;
    struct MemoryStruct chunk;

    chunk.memory = (char *)malloc(1);
    chunk.size = 0;

    curl = curl_easy_init();
    if (curl) {
        std::string url = "https://" + language + ".wikipedia.org/api/rest_v1/page/summary/" + query;
        
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
        curl_easy_setopt(curl, CURLOPT_USERAGENT, "cliwiki/1.0");

        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (res != CURLE_OK) {
            free(chunk.memory);
            return "Error: Failed to fetch data from Wikipedia";
        }
    } else {
        free(chunk.memory);
        return "Error: Failed to initialize curl";
    }

    std::string result(chunk.memory);
    free(chunk.memory);
    return result;
}

}