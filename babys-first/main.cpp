#include <iostream>
#include <string>

bool is_pass_correct(std::string_view pass) {
  return pass == "no_touching_pls";
}

int main() {
  std::cout << "Hello and welcome to this super secret program" << std::endl;
  
  std::string password;
  std::cout << "Please provide the secret password: ";
  std::cin >> password;

  if (is_pass_correct(password)) {
    std::cout << "Finally someone cracked me open !" << std::endl;
  } else {
    std::cout << "Nice try! Maybe ask the janitor for some help" << std::endl;
  }

  return 0;
}