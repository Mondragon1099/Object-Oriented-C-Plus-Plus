#include <iostream>
#include <string>

using namespace std;

void printMem(int * arr, int size) { // void printMem(int arr[], int size )
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++) {
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i);
    }
}

int main() {
    int SIZE = 5;
    int myArray[SIZE] = {1,2,3,4,5};
    printMem(myArray, SIZE);
    myArray[4] = 500;
    cout << myArray[4] << endl;
    int num;
    num = sizeof(myArray[0]) - sizeof(myArray[1]);


    return 0;
}