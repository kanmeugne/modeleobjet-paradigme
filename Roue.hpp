#pragma once

#include <string>

class Roue
{
    public:
        Roue()
        {
            _marque = "michelin";
        };
        ~Roue()
        {

        };
        std::string getMarque()
        {
            return _marque;
        };
        void setMarque(std::string marque)
        {
            _marque = marque;
        }
    private:
        std::string _marque;
};