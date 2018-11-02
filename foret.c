//
// Created by kevin on 28/10/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "ogreboulotteur.h"
#include "foret.h"
#include "enfant.h"
#include "ogre.h"


void afficherForet(Foret foret, Enfants enfants, Ogre ogre) {
    system ("CLS");

    for (int y = 0 ; y < FORET_HAUTEUR; y++) {
        for (int x = 0 ; x < FORET_LONGUEUR; x++) {
            if (ogrePresent(x, y, ogre)) {
                printf("%c", OGRE);

            } else {
                Enfant *enfant = enfantPresent(x, y, enfants);

                if (enfant == NULL) {
                    printf("%c", foret[y][x]);
                } else {

                    if ((*enfant).etat == MORT) {
                        printf("%c", ENFANT_MORT);
                    } else {
                        printf("%c", ENFANT);
                    }
                }
            }
        }
        printf ("\n");
    }
}

void initialiserForet (Foret foret){
    srand(time(NULL));
    for (int y = 0 ; y < FORET_HAUTEUR; y++){
        for (int x = 0 ; x < FORET_LONGUEUR; x++){

            if (x == 0 || x == FORET_LONGUEUR-1 || y == 0 || y == FORET_HAUTEUR-1) {
                foret[y][x] = ARBRE;

            } else if (rand () % FORET_DESITE == 0) {
                foret[y][x] = ARBRE;

            } else {
                foret [y] [x] = CASEVIDE;
            }
        }
    }
}

void faireVivreForet(Enfants enfants,Foret foret, Ogre ogre) {
    int Enfant_en_Vie;
    while (Enfant_en_Vie > 0) {
        deplacerEnfants(enfants, foret);
        deplacerOgre(&ogre, foret, enfants);
        afficherForet(foret, enfants, ogre);
        Enfant_en_Vie = compterEnfant(enfants);
        printf("\nNombre d'enfant en vie = %d", Enfant_en_Vie);
    }
    printf("La mort est passé et à emporté tout les enfants")
}
