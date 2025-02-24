#include <string>
#ifndef PET_H //prevents multiple class definitions
#define PET_H

using namespace std;

class Pet {
    public:
    //Constructors
    Pet();
    Pet(string, int, string, bool);
    //Mutators
    void updateName(string);
    void updateAge();
    void updateOwner(string);
    void setHouseTrained();

    //Accessors
    string getName() const;
    int getAge() const;
    string getOwner() const;
    bool getIsHouseTrained() const;

    private:
    string name;
    int age;
    string owner;
    bool isHouseTrained;

};
#endif 