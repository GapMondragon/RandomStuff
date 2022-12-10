// solve this activity in c++ :
// - ask input
// - reverse the letters for each string
// - make the lowercase to uppercase and vice versa
// error, 'reverse' is not a member of 'std' . fix this
// In the original code, the <algorithm> header was not included, so the compiler did not recognize the std::reverse function. By adding #include <algorithm> at the top of the code, we include the header that defines the std::reverse function, and the error should be fixed.

#include <algorithm>  // Add this line to include the algorithm header
#include <iostream>
#include <string>

int main() {
  std::string input;

  // Ask for input
  std::cout << "Please enter a string: ";
  std::getline(std::cin, input);

  // Reverse the letters in the string
  std::reverse(input.begin(), input.end());

  // Make the lowercase letters uppercase and vice versa
  for (auto& c : input) {
    if (isupper(c)) {
      c = tolower(c);
    } else if (islower(c)) {
      c = toupper(c);
    }
  }

  std::cout << "Transformed string: " << input << std::endl;

  return 0;
}
