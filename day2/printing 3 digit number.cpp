#include<iostream>
using namespace std;
int main() {
    int M;
    cout << "Enter  M: ";
    cin >> M;
    if(M >99 && M< 1000) {
        cout<< "This is a 3 digit number\n";
    } else {
        cout << "This is not a 3 digit number";
    }
    return 0;
}
