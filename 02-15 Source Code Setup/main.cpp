/*
 * Headers
 */
#include <iostream>
#include <string>
#include "inputOutput.h"

/*
 * Functions
 */
// <return type> <function name> <parameters>
// std::string prompt_for_str(std::string prompt) {
//   std::cout << prompt << '\n';
//   std::string answer{};
//   std::cin >> answer;
//   return answer;
// }

/*
 * Main
 */
int main(int argc, char* argv[]) {
  std::string fav_color{prompt_for_str("what is your favorite color? ")};
  // fav_color = prompt_for("what is your favorite color? ");
  std::cout << fav_color << '\n';
  std::cout << "hello" << '\n';
  return 0;
}