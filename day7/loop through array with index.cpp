#include<iostream>
using namespace std;
int main() {
    string cars[5] = {"BMW", "Audi", "Mercedes", "Toyota", "Lamborghini"};
    for(int i = 0; i < 5; i++) {
        cout<< i << " - " <<cars[i] << endl; // Looping through the array with index and printing each element
    }
    return 0;
}