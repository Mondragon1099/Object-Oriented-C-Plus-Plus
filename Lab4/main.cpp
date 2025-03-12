#include <iostream>
#include "RPG.h"

using namespace std;

void displayStats(RPG player1, RPG player2);
void displayEnd(RPG player1, RPG player2);
void gameLoop(RPG * player1, RPG * player2);

int main(){
    //       RPG(NAME, HEALTH, STRENGTH, DEFENSE, TYPE)
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    gameLoop(&p1, &p2);
    displayEnd(p1, p2);

}

void displayStats(RPG player1, RPG player2){
    cout << player1.getName() << " health: " << player1.getHealth() << " " << player2.getName() << " health: " << player2.getHealth() << endl;
}
void displayEnd(RPG player1, RPG player2){
    if(player1.isAlive() == true){
        cout << player1.getName() << " defeated " << player2.getName() << " ! Good game! \n";
    }
    else{
        cout << player2.getName() << " defeated " << player1.getName() << " ! Good game! \n";
    }
}
void gameLoop(RPG * player1, RPG * player2){
    while((player1->isAlive() == true) && (player2->isAlive() == true)){
        displayStats(*player1, *player2);
        cout << player1->getName() << " turn\n";
        player1->useSkills(player2);
        cout << "---------------------------------------\n";

        displayStats(*player1, *player2);
        cout << player2->getName() << " turn\n";
        player2->useSkills(player1);
        cout << "---------------------------------------\n";
    }
}