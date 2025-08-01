#include <iostream>
#include <cstdlib>
#include <string>

int main() {
  std::string str;
  std::cout << "Write name page: ";
  std::getline(std::cin, str);
  std::system(("xdg-open https://ru.wikipedia.org/wiki/" + str).c_str());
}
