#pragma once

#include <string>

enum Marque 
{
    CITROEN = 0,
    MERCEDES,
    PEUGEOT,
    BMW
};

class Passager;

class IDrivable
{
    public:

        virtual void demarrer() = 0;
        // getters
        virtual Marque getMarqueEnum() = 0;
        virtual const char* getCouleur() = 0;
        virtual const char* getMarque() = 0;
        virtual const char* getMoteur() = 0;
        virtual int getAnnee() = 0;
        
        virtual void setCouleur(std::string) = 0;
        virtual void setMarque(std::string) = 0;

        virtual void setAnnee(int annee) = 0;
        virtual void setMoteur(std::string moteur) = 0;
        virtual void setPassager(Passager* p) = 0;
        virtual void afficherEtatDesRoues() = 0;
        virtual void afficherPassager() = 0;
};