#pragma once

#include <string>

namespace cliwiki {
namespace colors {

extern const std::string RESET;
extern const std::string BOLD;
extern const std::string DIM;
extern const std::string RED;
extern const std::string GREEN;
extern const std::string YELLOW;
extern const std::string BLUE;
extern const std::string MAGENTA;
extern const std::string CYAN;
extern const std::string WHITE;
extern const std::string BG_BLUE;
extern const std::string BG_GREEN;
extern const std::string UNDERLINE;

void clearScreen();
void showSpinner(const std::string& message);

}
}