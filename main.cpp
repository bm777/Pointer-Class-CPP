#include <iostream>
#include "Personnage.h"

using namespace std;

int main()
{
    cout << "--------Program ----------" << endl;
	Personnage goliath("Epée aiguisée", 20);
	//Personnage david(goliath);
	Personnage david = goliath;
	david.afficherEtat();
	goliath.afficherEtat();

    return 0;
}
