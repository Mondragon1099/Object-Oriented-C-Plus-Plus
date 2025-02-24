#include "Pet.h"

Pet::Pet(){ //Default constuctor
    this->name = "defaultName";
    this->age = -1;
    this->owner = "defaultOwner";
    this->isHouseTrained = false;
}

Pet::Pet(string name, int age, string owner, bool isHouseTrained){ //Overloaded constructor
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}

//Mutators
void Pet::updateName(string new_name){
    name = new_name;
}

void Pet::updateAge(){
    age++;  //increment by 1
}

void Pet::updateOwner(string new_owner){
    owner = new_owner;
}

void Pet::setHouseTrained(){
    isHouseTrained = true;
}

//Accessors
string Pet::getName() const {
    return name;
}

int Pet::getAge() const {
    return age;
}

string Pet::getOwner() const {
    return owner;
}

bool Pet::getIsHouseTrained() const {
    return isHouseTrained;
}
