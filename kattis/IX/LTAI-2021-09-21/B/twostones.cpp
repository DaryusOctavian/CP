#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n % 2 == 0) {
    cout << "Bob" << endl;
  } else {
    cout << "Alice" << endl;
  }
  return 0;
}