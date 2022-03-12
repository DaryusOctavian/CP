#include <cmath>
#include <iostream>

using namespace ::std;

int main() {
  int n, m, wA = 0, wB = 0;
  double sum = 0;
  cin >> n >> m;
  int arr[3][m];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < m; j++) {
      arr[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    arr[1][a - 1] += b;
    arr[2][a - 1] += c;
    sum += b + c;
  }

  for (int i = 0; i < m; i++) {
    if (arr[1][i] > arr[2][i]) {
      cout << "A " << arr[1][i] - ((arr[1][i] + arr[2][i]) / 2 + 1) << " "
           << arr[2][i] << endl;
      wA += (arr[1][i] - ((arr[1][i] + arr[2][i]) / 2 + 1));
      wB += arr[2][i];
    } else {
      cout << "B " << arr[1][i] << " "
           << arr[2][i] - ((arr[1][i] + arr[2][i]) / 2 + 1) << endl;
      wB += (arr[2][i] - ((arr[1][i] + arr[2][i]) / 2 + 1));
      wA += arr[1][i];
    }
  }

  cout.precision(8);
  cout << abs(wA - wB) / sum << endl;
  return 0;
}
