// #include<iostream>
// using namespace std;
// int main() {
//     string John = "John";
//     string Doe = "Doe";
//     string FullName = John + Doe; // This will concatenate the strings
//     cout << "Full Name: " << FullName;
//     return 0;
// }

#include<iostream>
using namespace std;
int main() {
    string John = "John";
    string Doe = "Doe";
    string FullName = John + ' ' + Doe; // This will concatenate the strings With a space in between names.
    cout << "Full Name: " << FullName;
    return 0;
}