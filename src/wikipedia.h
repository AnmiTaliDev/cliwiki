#pragma once

#include "core.h"

namespace cliwiki {

class WikipediaSearchModule : public ISearchModule {
private:
    struct MemoryStruct {
        char *memory;
        size_t size;
    };
    
    static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp);

public:
    void initialize(const Config& config) override;
    std::string getName() const override;
    std::string search(const std::string& query, const std::string& language) override;
};

}