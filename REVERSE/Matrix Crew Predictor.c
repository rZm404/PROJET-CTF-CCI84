//**Enoncé pour les débutants:**
//Dans ce défi, vous allez devoir prédire le recrutement du prochain membre de l'équipage du vaisseau Nebuchadnezzar de la trilogie Matrix. 
//Pour ce faire, vous devrez entrer un nom dans le programme, et celui-ci va générer aléatoirement le nom d'un membre de l'équipage.
//Malheureusement, le code a été altéré de sorte que peu importe le nom que vous entrer, le résultat ne sera jamais correct.
//Il va donc falloir utiliser votre intelligence et votre créativité pour trouver un autre moyen de résoudre ce défi.
//Il pourrait être utile de regarder le code source du programme pour trouver des indices.
//Le programme est écrit en langage C, une bonne connaissance de ce langage pourrait vous aider à résoudre le défi.

//**Enoncé pour les expérimentés:**
//Dans ce défi, vous allez devoir contourner les mécanismes de sécurité mis en place pour protéger le flag. 
//Le programme génère aléatoirement un nom d'un membre de l'équipage du vaisseau Nebuchadnezzar de la trilogie Matrix,
//et vérifie si l'entrée de l'utilisateur correspond à celui-ci. Votre objectif est de trouver une méthode pour obtenir le flag sans entrer la prédiction correcte. 
//Il va vous falloir analyser le code source, et peut-être utiliser des techniques d'ingénierie inverse ou d'exploitation pour réussir ce défi.
//Il pourrait également être nécessaire de comprendre les faiblesses de la génération de nombres aléatoires utilisée dans le programme. 
//Ce défi est destiné aux personnes ayant une expérience avancée en sécurité informatique.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
  char *messages[] = { "Le bleu", "Niobe", "Morpheus" };
  int num_messages = sizeof(messages) / sizeof(char *);
  srand(time(NULL));
  while(1) {
    printf("Entrez le nom qui fera parti de l'équipage du Nebuchadnezzar : ");
    char prediction[100];
    fgets(prediction, sizeof(prediction), stdin);
    size_t ln = strlen(prediction) - 1;
    if (prediction[ln] == '\n')
    prediction[ln] = '\0';
    strcat(prediction, "123");  // Ajout de "123" à la fin de la prédiction
    int message_idx = rand() % num_messages;
    printf("Désigner volontaire : %s\n", messages[message_idx]);
    if(strcmp(messages[message_idx], prediction) == 0) {
      printf("Flag : NHM2I{EA4I1LF1-C32B-91HE-PBVS1Q0B}\n");
      break;
    }
    else
      printf("Désolé, l'équipage prédit ne correspond pas au désigner volontaire aléatoire.\n");
  }
  return 0;
}
