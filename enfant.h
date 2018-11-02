//
// Created by kevin on 28/10/2018.
//

#ifndef _enfant_h
#define _enfant_h
#include "ogreboulotteur.h"

void initialiserEnfants(Enfants, Foret);
void initialiserEnfant(Enfant*, Foret);

void deplacerEnfants(Enfants, Foret);
void deplacerEnfant(Enfant*, Foret);

Enfant* enfantPresent(int x, int y, Enfants enfants);
int compterEnfant (Enfants enfants);
#endif