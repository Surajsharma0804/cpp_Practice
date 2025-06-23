#include<iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10;
    int y = 29;
    cout << x<< " ";
    cout << y << endl;
    swap(&x, &y);
    cout << x << " ";
    cout << y;
    return 0;
}