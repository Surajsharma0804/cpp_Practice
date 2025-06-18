// Switch case is not necessary for the placement interviews.
// Whitout using switch case.
#include<iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    char op;
    cin>>op;
    cout << "Enter m: ";
    cin >> m;
    if(op== '+') cout<< n + m;
    if(op== '-') cout<< n - m;
    if(op== '*') cout<< n * m;
    if(op== '/') cout<< n / m;
    return 0;
}

// Switch case is used to execute one block of code among many blocks of code.
// syntax of switch case;
switch(integer / varibale) {
    case constant1;
    do this;
    break;
    case constant2;
    do this;
    break;
    case constant3;
    do this;
    break;
    default;
    do this;
}
