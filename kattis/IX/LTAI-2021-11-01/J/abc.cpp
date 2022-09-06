#include <iostream>

using namespace ::std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int x = a, y = b, z = c;
  c = max(max(x, y), z);
  a = min(min(x, y), z);
  b = x + y + z - a - c;
  string order;
  cin >> order;
  if (order == "ABC") {
    cout << a << " " << b << " " << c << endl;
  } else if (order == "ACB") {
    cout << a << " " << c << " " << b << endl;
  } else if (order == "BAC") {
    cout << b << " " << a << " " << c << endl;
  } else if (order == "BCA") {
    cout << b << " " << c << " " << a << endl;
  } else if (order == "CAB") {
    cout << c << " " << a << " " << b << endl;
  } else if (order == "CBA") {
    cout << c << " " << b << " " << a << endl;
  } else {
    cout << "error\n";
  }
  return 0;
}
