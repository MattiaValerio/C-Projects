#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
  
  // Creo un numero tra 0 e
  srand (time(NULL));
  int	moneta = rand() % 2;
  
  // Se il numero è 0: Testa
  // Se il numero non è 0: Coda
  if (moneta == 0) {
    std::cout << "Testa\n";
  }
	else {
    std::cout << "Coda\n";
  }


}