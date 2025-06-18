#include<iostream>
using namespace std;
int main(){
    // This program calculates the sum of three numbers}
    int a, b, c;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Enter 3rd number: ";
    cin >> c;
    cout << "The sum of a, b and c is: " << a + b + c <<endl;
    cout << "The difference of a, b and c is: " << a - b - c <<"\n";
    cout << "The product of a , b and c is: " << a * b * c << "\n";
    cout << "The average of a, b and c is: " << (a + b + c)/3 << "\n";
    return 0;
}