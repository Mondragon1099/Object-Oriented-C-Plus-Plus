// Person.h
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person {

public:
// --------------- Constructors ---------------
    Person();
    Person(string, int, string, bool);
// --------------- Mutator Functions ---------------
void updateName(string);
void updateAge(int);
void updateOccupation(string);
void updateLivesInIE();
// --------------- Accessor Functions ---------------
string getName() const;
int getAge() const;
string getOccupation() const;
bool getLivesInIE() const;
bool isOlderThan(Person b) const;

private:
string name;
int age;
string occupation;
bool lives_in_IE;
}; 
#endif