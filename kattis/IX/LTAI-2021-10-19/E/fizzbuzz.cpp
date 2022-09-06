#include <iostream>

using namespace ::std;

typedef int64_t i64;

int main() {
  i64 a, b, c;
  cin >> a >> b >> c;
  for (i64 i = 1; i <= c; i++) {
    if (i % a == 0 && i % b == 0) {
      cout << "FizzBuzz" << endl;
    } else if (i % a == 0) {
      cout << "Fizz" << endl;
    } else if (i % b == 0) {
      cout << "Buzz" << endl;
    } else {
      cout << i << endl;
    }
  }
  return 0;
}