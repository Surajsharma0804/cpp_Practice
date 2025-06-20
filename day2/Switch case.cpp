// // Switch case is not necessary for the placement interviews.
// // Whitout using switch case.
// #include<iostream>
// using namespace std;
// int main() {
//     int n, m;
//     cout << "Enter n: ";
//     cin >> n;
//     char op;
//     cin>>op;
//     cout << "Enter m: ";
//     cin >> m;
//     if(op== '+') cout<< n + m;
//     if(op== '-') cout<< n - m;
//     if(op== '*') cout<< n * m;
//     if(op== '/') cout<< n / m;
//     return 0;
// }

// // Switch case is used to execute one block of code among many blocks of code.
// // syntax of switch case;
// switch(integer / varibale) {
//     case constant1;
//     do this;
//     break;
//     case constant2;
//     do this;
//     break;
//     case constant3;
//     do this;
//     break;
//     default;
//     do this;
// }


#include<iostream>
using namespace std;
int main() {
    int day = 4;
    switch(day) {
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        break;
    }
    return 0;
}