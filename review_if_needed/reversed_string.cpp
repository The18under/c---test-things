#include <iostream>
#include <string>
#include <algorithm>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
std::string reversed = text;

std::string reversed_text(text.rbegin(),text.rend());

return text == reversed_text;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
  return 0;
}