//
// Created by kevin on 28/10/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "ogreboulotteur.h"
#include "ogre.h"
#include "enfant.h"
#include "foret.h"


int main() {
    Foret foret;
    Enfants enfants;
    Ogre ogre;


    initialiserForet (foret);
    initialiserEnfants(enfants, foret);
    initialiserOgre(&ogre, foret);
    faireVivreForet(enfants, foret, ogre);
}