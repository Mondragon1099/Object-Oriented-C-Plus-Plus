#include <iostream>
#include <string>
#include <vector>

using namespace std;

//printMem for string arrays
void printMem(string* arr, int size) {
   printf("Each string is worth %lu bytes\n", sizeof(arr[0]));

   for (int i = 0; i < size; i++) {
       printf("Word %s at Memory Location: %p\n", arr[i].c_str(), arr + i);
   }
}

//printMem for int arrays
void printMem(int * arr, int size) { // void printMem(int arr[], int size )
   printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
  
   for(int i = 0; i < size; i++) {
       printf("Value %i at Memory Location: %p\n", arr[i], arr + i);
   }
}

int main(){
   /* ARRAYS WITH INTEGERS */
   // array w/ 5 elements, numbers 1 to 5
   cout << "INTEGER ARRAY:" << endl;
   const int int_SIZE = 5;
   int int_arr[int_SIZE] = {1, 2, 3, 4, 5};
  
   // call printMem on the array
   printMem(int_arr, int_SIZE);

   //change last value of array to 500 & print
   int_arr[int_SIZE - 1] = 500;
   cout << "Value of last element in array: " << int_arr[int_SIZE - 1] << endl << endl;

   /* ARRAYS WITH STRINGS */
   cout << "STRING ARRAY:" << endl;
   const int greetings_SIZE = 5;
   string greetings[greetings_SIZE] = {"Hello", "Hola", "Bonjour", "Ciao", "Namaste"};
   printMem(greetings, greetings_SIZE);
   cout << endl;
  
   /* Vectors */
   // vector size of 5 w/ values of 1-5
   cout << "VECTOR:" << endl;
   const int v_SIZE = 5;
   vector<double> v1(v_SIZE);
   for (int i = 0; i < v_SIZE; i++) {
       v1[i] = i + 1;
   }

   // Populate vector with values 6 & 7 w/ printing number of elements
   v1.push_back(6);
   v1.push_back(7);
   cout << "Number of elements after adding two elements: " << v1.size() << endl;

   // Remove last element w/ printing number of elements
   v1.pop_back();
   cout << "Number of elements after removing one element: " << v1.size() << endl;

   return 0;
}
