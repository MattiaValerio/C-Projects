#include <iostream>

int main() 
{
  
  double pesos;
  double reais;
  double soles;
  double dollar;

  std::cout << "Pesos Colombiani: ";
  std::cin >> pesos;

  std::cout << "Reais: ";
  std::cin >> reais ;

  std::cout << "Soles: ";
  std::cin >> soles;

  dollar = 0.05*pesos + 0.19*reais + 0.25*soles;
  std::cout << "-----------------------------------\n";

  std::cout << "Totale: $" << dollar << "\n";

  
}