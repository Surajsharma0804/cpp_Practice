#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int num : arr) {
        cout << num << " "; // Looping through the array using a range-based for loop and printing each element 
    }
    return 0;
}