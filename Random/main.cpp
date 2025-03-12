#include <iostream>
using namespace std;

void modify(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] * 2;
    }
}

int main(){

    double a = 1.0;
    int half = 2;
    int one = 1;

    cout << "First output: " << a/half << endl;
    cout << "second output: " << one/half << endl;

}