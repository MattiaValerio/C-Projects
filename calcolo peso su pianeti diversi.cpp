#include <iostream>

int main() {
  
  //dichiaro le variabili
  double peso_terra;
  int scelta;
  double peso_finale;

  //richiedo il peso dell'atleta
  std::cout << "Inserire peso (kg): ";
  std::cin >> peso_terra;

  //richiedo su che pianeta voglia combattere
  std::cout << "Digitare il numero corrispondente al pianeta desiderato:\n ";
  std::cout << "1 	Mercurio\n";
  std::cout << " 2 	Venere\n";
  std::cout << " 3 	Marte\n";
  std::cout << " 4 	Jupiter\n";
  std::cout << " 5 	Saturno\n";
  std::cout << " 6 	Uranio\n";
  std::cout << " 7 	Neptuno\n";
  std::cout << "\n";
  std::cout << "Pianeta numero: "; 
  std::cin >> scelta;

  //ciclo switch per selezione del pianeta
  switch (scelta) {
    case 1:
    peso_finale = peso_terra*0.38;
    std::cout << "Il suo peso su Mercurio è di " << peso_finale << "kg. \n";
    break;
    case 2:
    peso_finale = peso_terra*0.91;
    std::cout << "Il suo peso su Mercurio è di " << peso_finale << "kg. \n";
    break;
    case 3:
    peso_finale = peso_terra*0.38;
    std::cout << "Il suo peso su Mercurio è di " << peso_finale << "kg. \n";
    break;
    case 4:
    peso_finale = peso_terra*2.34;
    std::cout << "Il suo peso su Mercurio è di " << peso_finale << "kg. \n";
    break;
    case 5:
    peso_finale = peso_terra*1.06;
    std::cout << "Il suo peso su Mercurio è di " << peso_finale << "kg. \n";
    break;
    case 6:
    peso_finale = peso_terra*0.92;
    std::cout << "Il suo peso su Mercurio è di " << peso_finale << "kg. \n";
    break;
    case 7:
    peso_finale = peso_terra*1.19;
    std::cout << "Il suo peso su Mercurio è di " << peso_finale << "kg. \n";
    break;
  }


}