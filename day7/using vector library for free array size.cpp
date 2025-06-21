#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<string> friends = {"Nikhil","Harsh", "Arib", "Avkesh", "Raunak",};
    friends.push_back("Rohan"); // Adding a new element to the vector
    for (string name : friends) {
        cout << name << "\n"; // Looping through the vector using a range-based for loop and printing each element
    }
    return 0;
}