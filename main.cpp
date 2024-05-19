#include <iostream>
using namespace std;

// Define a function that takes 3 integer a, b, c
void Max3(int a, int b, int c) {
    if (a > b && a > c) {
        cout << a;
    }
    else if (b > c)
        cout << b;
    else
        cout << c;
}

int main() {
    // Declare 3 variables
    int a, b, c;
    cout << "Enter 3 nos: " << endl;
    cin >> a >> b >> c;
    // Call the function
    Max3(a,b,c);
    return 0;
}


