#include <string>
#ifndef RPG_H //prevents multiple class definitions
#define RPG_H

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
    public:
    //constructors
    RPG();
    RPG(string name, int health, int strength, int defense, string type);
    //COMPLETE THE REST
    //Mututators
    void setSkills();
    void printAction(string, RPG);
    void updateHealth(int);
    void attack(RPG *); 
    void useSkills(RPG *); 

    //Accessors
    bool isAlive() const;
    string getName() const;
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;

    private:
    //COMPLETE THE REST
    string name;
    int health;
    int strength;
    int defense;
    string type; //warrior, mage, theif, archer
    string skills[SKILL_SIZE]; //array

};
#endif 