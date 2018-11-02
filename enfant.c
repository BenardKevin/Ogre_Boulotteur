//
// Created by kevin on 28/10/2018.
//


#include <stdlib.h>
#include "ogreboulotteur.h"
#include "enfant.h"


void initialiserEnfants(Enfants enfants, Foret foret){
    for (int i = 0; i < NOMBRE_ENFANT; ++i) {
        initialiserEnfant (&(enfants[i]), foret);
    }
}
void initialiserEnfant(Enfant *enfant, Foret foret) {
    int x, y;
    do {
         x = rand() % FORET_LONGUEUR;
         y = rand() % FORET_HAUTEUR;
    } while (foret[y][x] == ARBRE);
    (*enfant).x = x;
    (*enfant).y = y;
    (*enfant).etat = VIVANT;
}

void deplacerEnfants(Enfants enfants, Foret foret){
    for (int i = 0; i < NOMBRE_ENFANT; ++i) {
        if (enfants[i] .etat == VIVANT) {
            deplacerEnfant(&(enfants[i]), foret);
        }
    }
}
void deplacerEnfant(Enfant *enfant, Foret foret) {
    int x = (*enfant).x;
    int y = (*enfant).y;
    DIRECTION direction = rand() % 4;
    if ((*enfant).etat == VIVANT) {
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
    }
    if (foret [y][x] != ARBRE){
    (*enfant).x = x;
    enfant -> y = y;
    }
}

Enfant* enfantPresent(int x, int y, Enfants enfants) {
    for (int i = 0; i < NOMBRE_ENFANT; ++i) {
        if (enfants[i].x == x && enfants[i].y == y){
            return &enfants[i];
        }
    }
    return NULL;
}

int compterEnfant (Enfants enfants){
    int Enfant_Vivant = 0;
    for (int i = 0; i < NOMBRE_ENFANT; ++i) {
        if (enfants[i].etat == VIVANT){
            Enfant_Vivant++;
        }
    }
    return Enfant_Vivant;
}