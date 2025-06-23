#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;
    for(int i = 0; i<=a; i++) {
        // if(i%2!=0)
        if(i%2 == 1){
            cout << i << " ";
        }
    }
    return 0;
}