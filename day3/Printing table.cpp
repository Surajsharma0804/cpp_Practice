// Method 1;

// #include<iostream>
// using namespace std;
// int main() {
//     for(int i = 1; i <= 200; i++) {
//         if(i%20==0) {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// Method 2.
// #include<iostream>
// using namespace std;
// int main() {
//     int i;
//     cout << "Enter i: ";
//     cin >> i;
//     for(int a =1; a <= 200; a++) {
//         if(a % i == 0) {
//             cout << a << " ";
//         }
//     }
//     return 0;
// }

// Method 3.
#include<iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter last numbre: ";
    cin >> m;
    for(int i = 1; i<=m; i++) {
        if(i % n == 0)
        cout << i << " ";
    }
    return 0;
}