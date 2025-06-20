#include<iostream>
using namespace std;
 int main() //{
//     int myAge = 20;
//     int votingAge = 18;
//     if (myAge >= votingAge) {
//         cout << "I am eligible to vote." <<endl; // Checking if I am eligible to vote
//     } else {
//         cout << "I am not eligible to vote.";
//     }
//     return 0;
// }
{
    int Age;
    cout << "Enter your age: ";
    cin >> Age; // Taking input for age
    int votingAge = 18;
    if (Age >= votingAge) {
        cout<<"You are eligible to vote.";
    } else {
        cout << "You are not eligible to vote.";
    }
    return 0;
}