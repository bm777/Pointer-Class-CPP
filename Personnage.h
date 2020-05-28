#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include "Arme.h"
#include <iostream>
#include <string>

class Personnage
{
    public:
    Personnage();
    Personnage(Personnage const& personneACopier);
    Personnage operator=(Personnage const& p);
    ~Personnage();
    Personnage(std::string nomArme, int degatsArme);
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat() const;

    private:

    int m_vie;
    int m_mana;
    Arme *m_arme;


};


#endif // PERSONNAGE_H_INCLUDED
