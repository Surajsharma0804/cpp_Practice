// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a n: ";
//     cin >> n;
//     if(n%2 == 0) {
//         cout << n << " is an Even Number\n";        
//     } else {
//         cout<< n << " is an Odd Number\n";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n : ";
	cin>> n;
	//(If we want to do upper problem in single line so we have to need to use condition statement.
	//(condition) ? if true : if false;
	(n%2==0) ? cout<<n  <<": is an Even Number" : cout<<n <<": is an Odd Number";
	return 0;
}