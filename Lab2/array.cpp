#include <iostream>
#include <vector>
using namespace std;
//name arr pointer location of the 1st element
/**
* @brief prints the elements in the array and their memory locations
* @param arr - array of integers
* @param size - the number of elements in the array
*/
void printMemArr(const int * arr, int size) { // void printMemArr(int arr[], int size ) //pass by value
    printf("Array - Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++){
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i); //arr returns address 
    }
}
/**
 * @brief increments all of the elements in arr by 10
 * 
 * @param arr - array of integers
 * @param size - the number of elements in the array
 */
void incArrBy10(int * arr, int size){ //void incArrBy10(int arr[], int size) //pass by reference
    for(int i=0; i < size; i++) {
        arr[i] += 10;
    }
}

int main(){
    const int SIZE = 5;
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++){
        arr[i] = 100 + i;
    }
    printf("Before------------\n");
    printMemArr(arr, SIZE);
    incArrBy10(arr, SIZE);
    printf("After------------\n");
    printMemArr(arr, SIZE);
    return 0;
}