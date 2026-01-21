#include <iostream>
#include <cstdlib>
#include <ctime>
#include "obfuscate.h"

int main()
{
int compteur = 0;
int choixDifficulte = 0;
int nombreMystere = 0;
int nombreSaisi = 0;
int MAX = 0;
const int MIN = 1;
char* elflaggito = AY_OBFUSCATE("NHM2I{b035a154-defe-4250-8c6a-3fe3562d9c1c}");

std::cout << " Menu de selection de la difficulte :\n          1.\n          2.\n          3.\n          4.\n";
std::cout << "\n \n Saisissez 1 ou 2 ou 3 ou 4. Faites votre choix : ";
std::cin >> choixDifficulte;

switch(choixDifficulte) {
    case 1:
        MAX = 100;
        break;
    case 2:
        MAX = 500;
        break;
    case 3:
        MAX = 1000;
        break;
    case 4:
        std::cout << "\n cin >> : ";
        std::cin >> MAX;
        break;
    default: std::cout << "Valeur incorrecte!\n"; exit(1);
}

srand(time(NULL));
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

while (nombreSaisi != nombreMystere)
{
    std::cout << AY_OBFUSCATE("\nChoisissez un nombre : ");
    std::cin >> nombreSaisi;
    compteur = compteur + 1;

    if (nombreMystere > nombreSaisi)
        std::cout << AY_OBFUSCATE("\nC'est moins !\n\n\n\n");
    else if (nombreMystere < nombreSaisi)
        std::cout << AY_OBFUSCATE("\nC'est plus !\n\n\n");
    else
        std::cout << "\n\n Vous n'avez pas vexe le capitaine en devinant le bon age, voici votre recompense : " << elflaggito << " !!!\n\n";
}
return 0;
}
