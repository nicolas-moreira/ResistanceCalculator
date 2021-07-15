//
// Created by nicolas on 24/09/2020.
//

#include "Resistance.h"
#include "iostream"
#include <cmath>
#include <ratio>

Resistance::Resistance() {

    couleur1 = 0;
    couleur2 = 0;
    couleur3 = 0;

}

void Resistance::saisie() {

    unsigned char buffer[10];
    std::cout << "Entrer le code couleur sous la formee de 3 caracteres (Ex: BNR)" << std::endl;
    std::cin >> buffer;

    int compteur = 0;
    for (int i = 0; i < 3; ++i) {
        switch (buffer[i]) {
            case 'N':
                if(compteur == 0){couleur1=0;}
                if(compteur == 1){couleur2=0;}
                if(compteur == 2){couleur3=0;}
                break;
                case 'M':
                if(compteur == 0){couleur1=1;}
                if(compteur == 1){couleur2=1;}
                if(compteur == 2){couleur3=1;}
                break;
                case 'R':
                if(compteur == 0){couleur1=2;}
                if(compteur == 1){couleur2=2;}
                if(compteur == 2){couleur3=2;}
                break;
                case 'O':
                if(compteur == 0){couleur1=3;}
                if(compteur == 1){couleur2=3;}
                if(compteur == 2){couleur3=3;}
                break;
                case 'J':
                if(compteur == 0){couleur1=4;}
                if(compteur == 1){couleur2=4;}
                if(compteur == 2){couleur3=4;}
                break;
                case 'V':
                if(compteur == 0){couleur1=5;}
                if(compteur == 1){couleur2=5;}
                if(compteur == 2){couleur3=5;}
                break;
                case 'B':
                if(compteur == 0){couleur1=6;}
                if(compteur == 1){couleur2=6;}
                if(compteur == 2){couleur3=6;}
                break;
                case 'v':
                if(compteur == 0){couleur1=7;}
                if(compteur == 1){couleur2=7;}
                if(compteur == 2){couleur3=7;}
                break;
                case 'g':
                if(compteur == 0){couleur1=8;}
                if(compteur == 1){couleur2=8;}
                if(compteur == 2){couleur3=8;}
                break;
                case 'b':
                if(compteur == 0){couleur1=9;}
                if(compteur == 1){couleur2=9;}
                if(compteur == 2){couleur3=9;}
                break;
        }
        compteur++;
    }


    couleur1*= 10;
    float valeur1 = (float)couleur1 + (float)couleur2;
    valeur = valeur1 * (float)powf(10,couleur3);
}

void Resistance::affiche() {


    if(valeur < 1000){
        std::cout << std::fixed << "La resistance vaut " << (int)valeur << " Ohms";
    }
    if(valeur < 1000000 && valeur > 1000){
        std::cout << std::fixed << "La resistance vaut " << (long)valeur << " KOhms";
    }
    if(valeur >= 1000000){
        std::cout << std::fixed << "La resistance vaut " << (long)valeur << " MOhms";
    }


}
