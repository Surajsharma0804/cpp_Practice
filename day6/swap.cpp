#include<iostream>
using namespace std;
int main(){
    int a, b;
    a = 5;
    b = 10;
    cout << "The value of a is: " << a <<endl;
    cout << "The value of b is: " << b <<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Result after swapping: " << a << endl;
    cout << "Result after swapping: " << b;
    return 0;
}