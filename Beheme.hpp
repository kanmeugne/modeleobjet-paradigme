#pragma once

#include "Voiture.hpp"

class Beheme : public Voiture
{
    public:
        Beheme()
        {
            _marqueenum = Marque::BMW;
            _marque = "BMW";
        };

        ~Beheme()
        {

        };
        virtual void demarrer()
        {
            printf("Vrrooom de %s : VROOAAAARRRRRROUM ROUM ROUM\n", _marque.c_str());
        }

};