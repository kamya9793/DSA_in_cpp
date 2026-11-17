#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;


    bool one = (a == b);
    cout << one << endl;

    bool two = (a != b);
    cout << two << endl;

    bool three = (a <= b);
    cout << three << endl;

    bool four = (a >= b);
    cout << four << endl;

    return 0;
}