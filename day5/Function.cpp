#include<iostream>
using namespace std;
int greet() {
    cout<< "Hello, Welcome to my First Funtion Progran in c++\n";
    return 0;
}
int main() {
    int a, b;
    cout << "Enter First numbers:" ;
    cin >> a ;
    cout<< "Enter second Number:";
    cin >> b;
    greet();
    cout<< "The sum of a and b is: " << a + b << endl;
    return 0;
}