#include <iostream>

int main() {
  
  double ph = 7;
  
  // Write the if, else if, else here:
  if (ph > 7) {
    std::cout << "Il Ph è basico.";
  } 
  else if (ph < 7) {
    std::cout << "Il Ph è acido.";
  }
  else{
    std::cout << "Il Ph è neutrale.";
  }
  