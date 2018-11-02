//
// Created by kevin on 01/11/2018.
//

#ifndef OGRE_BOULOTTEUR_OGREBOULOTTEUR_H
#define OGRE_BOULOTTEUR_OGREBOULOTTEUR_H


#define FORET_HAUTEUR 5    // Nombres de caractères en hauteur de la forêt.
#define FORET_LONGUEUR 10   // Nombres de caractères en longueur de la forêt.
typedef char Foret [FORET_HAUTEUR] [FORET_LONGUEUR];    // Tableau représentant la forêt.
#define FORET_DESITE 25 // Pourcentage de chance d'obtenir des arbres dans la forêt.
#define ARBRE 'T'   // Représentation d'un arbre.
#define CASEVIDE ' ' // Représentation d'un espace vide.


typedef enum { DROITE = 0, HAUT = 1, GAUCHE = 2, BAS = 3 } DIRECTION;   // Liste des directions des personnages.
#define NOMBRE_ENFANT 2       // Nombres d'enfants dans la forêt.
#define ENFANT '.'             // Représentation d'un enfant.
#define OGRE 'O'               // Représentation d'un ogre.
typedef struct { int x, y; } Ogre;  // Intégration de l'ogre dans la forêt.
#define ENFANT_MORT '+'
typedef enum { VIVANT, MORT} Etat;  // Liste des etats de vie d'un enfant.
typedef struct { int x, y; Etat etat;} Enfant;  // Intégration des enfants dans la forêt.
typedef Enfant Enfants[NOMBRE_ENFANT];  //

#endif //OGRE_BOULOTTEUR_OGREBOULOTTEUR_H