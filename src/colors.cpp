#include "colors.h"
#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

namespace cliwiki {
namespace colors {

const std::string RESET = "\033[0m";
const std::string BOLD = "\033[1m";
const std::string DIM = "\033[2m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
const std::string BG_BLUE = "\033[44m";
const std::string BG_GREEN = "\033[42m";
const std::string UNDERLINE = "\033[4m";

void clearScreen() {
    std::cout << "\033[2J\033[H";
}

void showSpinner(const std::string& message) {
    const std::vector<std::string> spinner = {"|", "/", "-", "\\"};
    for (int i = 0; i < 20; ++i) {
        std::cout << "\r" << CYAN << spinner[i % 4] << " " << message << RESET;
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << "\r" << std::string(message.length() + 10, ' ') << "\r";
}

}
}