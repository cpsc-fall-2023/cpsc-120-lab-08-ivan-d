// Ivan Diaz
// I.Diaz951@csu.fullerton.edu
// @IvanDiaz335
// Partners: @jasontran13

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cout << "Error: you must supply three arguments\n";
    return 1;
  }

  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};

  std::cout << "Your order:"
            << "\n"
            << "A " << protein << " sandwich on " << bread << " with "
            << condiment << ".\n";

  return 0;
}
