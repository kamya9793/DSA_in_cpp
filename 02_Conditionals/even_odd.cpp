#include <iostream>
using namespace std; 

int main() {
    int a;
     cout << "Enter the number: ";
     cin >> a;

     if (a % 2 == 0)
     {
        cout << "Given number is even" << endl;

     }else{
        cout << "Given number is odd" << endl;
     }
     
    return 0;
}