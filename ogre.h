//
// Created by kevin on 01/11/2018.
//

#ifndef ORGRE_BOULOTTEUR_OGRE_H
#define ORGRE_BOULOTTEUR_OGRE_H

#include "ogreboulotteur.h"

void initialiserOgre(Ogre *ogre, Foret foret);
void deplacerOgre(Ogre *ogre, Foret foret, Enfants enfants);
int ogrePresent(int x, int y, Ogre ogre);
void boulotterEnfants(Enfants enfants, Ogre *ogre);

#endif //ORGRE_BOULOTTEUR_OGRE_H
