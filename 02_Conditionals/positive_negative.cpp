#include <iostream>
using namespace std;

int main() {
    int num ;
    cout << "Enter the number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Given number in negative" << endl;
    }
    else if (num > 0)
    {
        cout << "Given number in positive" << endl;
    }
    else{
        cout << "Given number in zero" << endl;
    }
    return 0;
}