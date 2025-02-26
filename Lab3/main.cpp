#include <iostream>
#include "RPG.h"

using namespace std;
int main(){
    RPG unknownNoob = RPG();
    cout << unknownNoob.isAlive() << endl;
    unknownNoob.updateHealth(-1);
    cout << unknownNoob.isAlive() << endl;


    RPG Bob = RPG("Bob_theHeretic", 50, 3, 5, "mage" );
    cout << Bob.isAlive() << endl;
    Bob.updateHealth(-1);
    cout << Bob.isAlive() << endl;



}
