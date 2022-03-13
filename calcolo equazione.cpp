#include <iostream>
#include <cmath>

int main() {
  
  //Variaili
  int a;
  int b;
  int c;
  double rad1, rad2;
  
  std::cout << "Inserire il valore della variabile a: ";
  std::cin >> a;
  
  std::cout << "Inserire il valore della variabile b: ";
  std::cin >> b;

  std::cout << "Inserire il valore della varibile c: ";
  std::cin >> c;
  std::cout << "-------------------------------------------\n";

  rad1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  std::cout << "Risultato 1: " << rad1 << "\n";

  rad2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);
  std::cout << "Risultato 2: " << rad2 << "\n";
  
  
}