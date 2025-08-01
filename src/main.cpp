#include <iostream>
#include <cstdlib>
#include <string>

int main() {
  std::string wiki;
  std::cout << "Write name page: ";
  std::getline(std::cin, wiki);
  std::system(("xdg-open https://ru.wikipedia.org/wiki/" + wiki).c_str());
}
