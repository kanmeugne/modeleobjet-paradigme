#include <iostream>
#include "Roue.hpp"
#include "Passager.hpp"
#include "Mercedes.hpp"
#include "Garage.hpp"
#include "GarageModerne.hpp"
#include "Beheme.hpp"


int main(int argc, char** argv)
{
    GarageModerne g;
    Mercedes m;
    Beheme b;
    // b.demarrer();
    // m.demarrer();

    // ajout d'étages
    g.creerEtage<Beheme>();
    g.creerEtage<Mercedes>();

    // ajout de voiture dans les étages
    g.ajouterVoiture<Beheme>(&b);
    g.ajouterVoiture<Mercedes>(&m);

    // démarrer les voitures de tous les étages
    g.demarrerVoitureEtages();

    
}