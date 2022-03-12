#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 a;
  cin >> a;
  cout << (a + (a % 10) * 100) / 10 << endl;
  return 0;
}