/*
 * Headaers
 */
#include <iostream>
#include <string>

/*
 * Functions
 */
// <return type> <function name> <parameters>
std::string prompt_for(std::string prompt) {
  std::cout << prompt << '\n';
  std::string answer{};
  std::cin >> answer;
  return answer;
}

/*
 * Main
 */
int main(int argc, char* argv[]) {
  std::string fav_color{prompt_for("what is your favorite color? ")};
  // fav_color = prompt_for("what is your favorite color? ");
  std::cout << fav_color << '\n';
  return 0;
}