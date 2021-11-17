#pragma once

#include "IDrivable.hpp"
#include <vector>
#include <map>
#include <iostream>
class IDrivable;

class GarageModerne
{
    public :
        GarageModerne() = default;
        ~GarageModerne() = default;

        template<class T>
        void ajouterVoiture(T* v)
        {
            const char* type_name = typeid(T).name();
            if (_etages.find(type_name) != _etages.end())
                _etages[type_name].push_back(v);
        };

        template<class T>
        void creerEtage()
        {
            const char* type_name = typeid(T).name();
            if (_etages.find(type_name) == _etages.end())
            {
                const char* type_name = typeid(T).name();
                std::vector<IDrivable*> container;
                _etages.insert({type_name, container});
            }
        };

        void demarrerVoitureEtages()
        {
            for (auto ar  : _etages)
            {
                std:: cout << "demarrage des voitures" <<  ar.first << std::endl;
                for (auto v : ar.second)
                {
                    v->demarrer();
                }
            }
        };

    private:
        std::vector<IDrivable*> _parking;
        std::map<const char*, std::vector<IDrivable*>> _etages;
};