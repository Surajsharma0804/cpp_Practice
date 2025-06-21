#include<iostream>
using namespace std;
int main() {
    string friends[5] = {"Nikhil", "Harsh", "Raunak", "Rohan", "Arib Ashraf"};
    for (string name : friends) {
        cout << name << " "; // Looping through the array using a range-based for loop and printing each element
    }
    return 0;
}