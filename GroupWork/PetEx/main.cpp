#include<iostream>
#include "Pet.h"

using namespace std;
int main (){

Pet unknown = Pet();
cout << unknown.getName() << endl;
cout << unknown.getAge() << endl;
cout << unknown.getOwner() << endl;
cout << boolalpha; //Will display 1/0 as true/false for bool cout
cout << unknown.getIsHouseTrained() << endl << endl;

Pet newPet = Pet("Jake", 1, "Finn", false);
cout << newPet.getName() << endl;
cout << newPet.getAge() << endl;
cout << newPet.getOwner() << endl;
cout << newPet.getIsHouseTrained() << endl << endl;

newPet.updateName("Jake the Dog");
newPet.updateAge();
newPet.updateOwner("Finn the Human");
newPet.setHouseTrained();

cout << newPet.getName() << endl;
cout << newPet.getAge() << endl;
cout << newPet.getOwner() << endl;
cout << newPet.getIsHouseTrained() << endl;
}