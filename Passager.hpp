#include <string>

class Passager
{
    public:
        Passager()
        {
            _nom = "bibi";
        };
        ~Passager()
        {

        };
        std::string getNom()
        {
            return _nom;
        };
        void setNom(std::string nom)
        {
            _nom = nom;
        }
    private:
        std::string _nom;
};