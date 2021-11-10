#include <iostream>
#include <string>
#include "Diff.cpp"
#include "Secret.cpp"
#include "Gguess.cpp"

int main() {
  // Secret secret;
  // int n = secret.number();
  // std::cout
  //   << "\nnumber: " << n
  //   << "\n";

  // Gguess guess;
  // int g = guess.number();
  // std::cout
  //   << "\nnumber g: " << g
  //   << "\n";

  int diff = Diff(Secret(1), Gguess(10)).number();
  std::cout
    << "\nnumber Diff: " << diff
    << "\n";


  // system("Pause");
  return 0;
}
