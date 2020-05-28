#include "Personnage.h"
#include <string>

using namespace std;

Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;
    //Arme *m_arme;
    m_arme = new Arme();

}
Personnage::Personnage(string nomArme, int degatsArme) :m_arme(0), m_vie(100), m_mana(100)
{
    m_arme = new Arme(nomArme, degatsArme);
}
Personnage::Personnage(Personnage const& personeACopier): m_vie(personeACopier.m_vie), m_mana(personeACopier.m_mana), m_arme(0)
{
    m_arme = new Arme(*(personeACopier.m_arme));
}
Personnage::~Personnage()
{
    delete m_arme;
}
void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    if(m_vie < 0)
    {
        m_vie = 0;
    }
}
void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme->getDegats());
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;
    if (m_vie > 100)
    {
        m_vie = 100;
    }
}
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}
bool Personnage::estVivant() const
{
    return m_vie >  0; // Renvoie true sil est vivant et false si sa vie est negative
}
void Personnage::afficherEtat() const
{
    cout << "-----------Personnage---------------" << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme->afficher();
    cout << "------------------------------------" << endl;
}
Personnage Personnage::operator=(Personnage const& p)
{
    if (this != &p)
    {
        m_vie = p.m_vie;
        m_mana = p.m_mana;
        delete m_arme;
        m_arme = new Arme(*(p.m_arme));

        return *this;
    }
}
