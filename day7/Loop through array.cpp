#include<iostream>
using namespace std;
int main() {
    string cars[5] = {"BMW", "Audi", "Mercedes", "Toyota", "Lamborghini"};
    for (int i =0; i<5; i++) {
        cout << cars[i] << " "; // Looping through the array and printing each element
    }
    return 0;
}