#include<iostream>
using namespace std;
int main() {
    int sp, cp;
    cout << "Enter sp: ";
    cin >> sp;
    cout << " Enter cp: ";
    cin >> cp;
    if(sp>cp) {
        cout << "We are in profit of: " << sp-cp <<"\n";
    } else if(sp<cp){
        cout << "We are in loss of: " << cp-sp <<endl;
    } else {
        cout << "We are not in profit and not is loss";
    }
    return 0;
}