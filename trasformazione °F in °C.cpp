#include <iostream>

int main() {
  
  //Dichiaro le 2 variabili
  int tempf;
  int tempc;

  //richiedo la temperatura all'utente
  std::cout << "Inserire la temperatura °F: ";
  std::cin >> tempf;

  //conversione da F° a C° tramite la formula
  tempc= (tempf-32) / 1.8;

  //mostro a display il risultato
  std::cout << "La temperatura è di " << tempc << "°C\n";