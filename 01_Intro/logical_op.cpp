#include <iostream>
using namespace std;

int main() {
  int a = 62, b = 47;
  
  bool one = (a && b);
  cout << one <<endl;

  bool two = (a || b);
  cout << two <<endl;

  bool three = (!a);
  cout << three <<endl;

    return 0;
}