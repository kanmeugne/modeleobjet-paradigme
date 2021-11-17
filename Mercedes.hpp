#pragma once

#include "Voiture.hpp"

class Mercedes : public Voiture
{
public:
    Mercedes()
    {
        _marqueenum = Marque::MERCEDES;
        _marque = "Mercedes";
    };

    ~Mercedes(){

    };
    virtual void demarrer()
    {
        printf("Vrrooom de %s : VROOAAAARRRRRROUM ROUM RAM ROUM\n", _marque.c_str());
    }
};