#pragma once

#include "IDrivable.hpp"

class Voiture : public IDrivable
{
    public:
        Voiture()
        {
            _couleur = "rouge";
            _marque = "mercedes";
            _moteur = "essence";
            _annee = 2012;
        };
        ~Voiture()
        {

        };

        // getters
        virtual Marque getMarqueEnum()
        {
            return _marqueenum;
        }
        virtual const char* getCouleur()
        {
            return _couleur.c_str();
        };
        virtual const char* getMarque()
        {
            return _marque.c_str();
        };
        virtual const char* getMoteur()
        {
            return _moteur.c_str();
        };
        virtual int getAnnee()
        {
            return _annee;
        };
        
        virtual void setCouleur(std::string)
        {

        };
        virtual void setMarque(std::string)
        {

        };
        virtual void setAnnee(int annee)
        {
            _annee = annee;
        };
        virtual void setMoteur(std::string moteur)
        {
            _moteur = moteur;
        };
        virtual void setPassager(Passager* p)
        {
            _passager = p;
        }
        // affichages
        virtual void afficherEtatDesRoues()
        {
            printf("Roue avant 1 : marque --> %s\n", avant1.getMarque().c_str());
            printf("Roue avant 2 : marque --> %s\n", avant2.getMarque().c_str());
            printf("Roue arriere 1 : marque --> %s\n", arriere1.getMarque().c_str());
            printf("Roue arriere 2 : marque --> %s\n", arriere2.getMarque().c_str());
        }
        virtual void afficherPassager()
        {
            if (_passager != NULL)
            {
                printf("Passager : nom --> %s\n", _passager->getNom().c_str());
            }
        }
    protected:
        std::string _couleur;// = "rouge";
        std::string _marque;// = "mercedes";
        std::string _moteur;// = "essence";
        Roue avant1;
        Roue avant2;
        Roue arriere1;
        Roue arriere2;
        Passager* _passager = NULL;
        Marque _marqueenum = Marque::MERCEDES;
        int _annee;// = 2013;
};
