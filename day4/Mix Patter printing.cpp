#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows and columns: ";
    cin >> n;
    for(int i=1;i<=n;i++) {
        for (int j = 1; j<=i; j++) {
            if(i%2 ==1) {
                cout << j << " ";
            } else{
                cout<< char(j+64) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}