#include <iostream>
using namespace std;

int main() {
  float one, two;
  cin >> one >> two;
  if(one != 0 && two != 0) cout << one / two;
  else cout << "На 0 не делят." << endl;
}
