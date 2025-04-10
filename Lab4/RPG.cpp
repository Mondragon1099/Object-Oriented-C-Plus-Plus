#include "RPG.h"
#include <iostream>


RPG::RPG() { //Default constructor
    this->name = "NPC";
    this->health = 100;
    this->strength = 10;
    this->defense = 10;
    this->type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
}

RPG::RPG(string name, int health, int strength, int defense, string type)
{
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    setSkills();
}
//Mututators
void RPG::setSkills()
{
    if (type == "mage") {
        skills[0] = "fire";
        skills[1] = "thunder";
    }
    else if (type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    }
    else if (type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    }
    else {
        skills[0] = "slash";
        skills[1] = "parry";
    }
}

void RPG::printAction(string skill, RPG opponent)
{
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}

void RPG::updateHealth(int new_health)
{
    this->health = new_health;
}
/* attack decreases the opponent's health by (strength - opponent's defense)
opponent's defense should soften the blow from the attack
For example, (opponentsHealth - (20 - 5))
*/
void RPG::attack(RPG *opponent) {
    int newHealth;
    
    //if() prevents low strength from decreasing opponent health
    // Note: opponent->getDefense() is the same as (*opponent).getDefense()
    if(getStrength() > opponent->getDefense()){
        newHealth = (opponent->getHealth()) - (abs(getStrength() - opponent->getDefense())); //abs() fixes the health error
        opponent->updateHealth(newHealth);
    }
}

//Prompts the user to choose a skill and calls printAction() and attack()
void RPG::useSkills(RPG *opponent){  
    int chosen_skill_index;

    for(int i = 0; i < SKILL_SIZE; i++){
        printf("Skill %i: %s\n", i, skills[i].c_str());
    }

    std::cout << "Choose a skill to use: Enter 0 or 1\n";
    std::cin >> chosen_skill_index;

    string chosen_skill = skills[chosen_skill_index];

    printAction(chosen_skill, *opponent);

    attack(opponent);
} 
//Accessors
bool RPG::isAlive() const
{
    if(health > 0) {
        return true;
    }
    else{
        return false;
    }
}

string RPG::getName() const
{
    return name;
}

int RPG::getHealth() const
{
    return health;
}

int RPG::getStrength() const
{
    return strength;
}

int RPG::getDefense() const
{
    return defense;
}
