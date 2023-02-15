#include <iostream>
#include "inputOutput.h"
#include <string>

using namespace std;

string prompt_for_str(string prompt) {
  cout << "Please input a string: "; 
  string answer{};
  cin >> answer;
  return answer;
}