#include <iostream>
#include "Resistance.h"
int main() {
    std::cout << "Calculateur de valeurs de resistances pour un code 4 anneaux" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << std::endl <<  "3 anneaux de couleurs et un anneau de tolerance" << std::endl;
    std::cout << "Note : le troisieme anneau est compris entre Noir et Bleu" << std::endl;
    std::cout << std::endl << "Correspondances : " << std::endl;
    std::cout << "Noir      : N pour 0 " << std::endl;
    std::cout << "Marron    : M pour 1" << std::endl;
    std::cout << "Rouge     : R pour 2" << std::endl;
    std::cout << "Orange    : O pour 3" << std::endl;
    std::cout << "Jaune     : J pour 4 " << std::endl;
    std::cout << "Vert      : V pour 5 " << std::endl;
    std::cout << "Bleu      : B pour 6" << std::endl;
    std::cout << "Viole     : V pour 7 " << std::endl;
    std::cout << "Gris      : G pour 8" << std::endl;
    std::cout << "Blanc     : B pour 9" << std::endl;

    Resistance R1;
    R1.saisie();
    R1.affiche();
    return 0;
}
