#include "Person.h"
int main (){

Person bob = Person(" Bob", 100 , " retired ", true);
cout << bob.getName() << endl;
Person unknown = Person(); // Person unknown;
cout << unknown.getName() << endl;

}
