#pragma once

#include "IDrivable.hpp"
#include <vector>
class Voiture;

class Garage
{
    public :
        Garage()
        {

        };
        ~Garage()
        {

        };
        Garage& operator+=(IDrivable* dv)
        {
            _parking.push_back(dv);
            return *this;
        }
        void ajouterVoiture(IDrivable* v)
        {
            _parking.push_back(v);
        };
        void afficherEtatDesRoues()
        {
            for (IDrivable* v : _parking)
            {
                v->afficherEtatDesRoues();
            }
        };
    private:
        std::vector<IDrivable*> _parking;
};