#include<iostream>
using namespace std;
int main() {
    int n, m=5;
    cout << "Enter n: ";
    cin >> n;
    for(int i =1; i<=n; i++) {
        cout << m << " ";
        m+= 3;
    }
    return 0;
}