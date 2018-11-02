//
// Created by kevin on 01/11/2018.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "ogreboulotteur.h"
#include "enfant.h"
#include "ogre.h"


void initialiserOgre(Ogre *ogre, Foret foret) {
    int x, y;
    do {
        x = rand() % FORET_LONGUEUR;
        y = rand() % FORET_HAUTEUR;
    } while (foret[y][x] == ARBRE);
    (*ogre).x = x;
    (*ogre).y = y;
}
void deplacerOgre(Ogre *ogre, Foret foret, Enfants enfants) {
    int x = (*ogre).x;
    int y = (*ogre).y;
    DIRECTION direction = rand() % 4;

    switch (direction) {
        case DROITE:
            x = x + 1;
            break;
        case HAUT:
            y = y - 1;
            break;
        case GAUCHE:
            x = x - 1;
            break;
        case BAS:
            y = y + 1;
            break;
    }
    if (foret[y][x] != ARBRE) {
        ogre->x = x;
        ogre->y = y;
        boulotterEnfants(enfants, ogre);
    }
}
int ogrePresent(int x, int y, Ogre ogre) {
        if (ogre.x == x && ogre.y == y){
            return true;
        }
    return false;
}

void boulotterEnfants(Enfants enfants, Ogre *ogre) {
    for (int i = 0; i < NOMBRE_ENFANT; ++i) {
        if (enfants[i].etat == VIVANT) {
            if (enfants[i].x == (*ogre).x && enfants[i].y == (*ogre).y) {
                enfants[i].etat = MORT;
            }
        }
    }
}