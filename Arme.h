#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED
#include <string>
#include <iostream>
class Arme
{
    public:

    Arme();
    Arme(Arme const& arme);
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;


    private:

    std::string m_nom;
    int m_degats;
};

#endif // ARME_H_INCLUDED


