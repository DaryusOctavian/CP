#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  ifstream cin{"input.txt"};
  ofstream cout{"main.out"};

  i64 n, p;
  cin >> p;
  while (cin >> n) {
    /* varianta complet universala a programului pt orice p,
       pentru ca nu am vazut ca se da un p (:
    i64 min = 9999999999;
    i64 start = -1, stop;
    for (i64 i = 2; i * i <= 2 * n; i++) {
      if (2 * n % i == 0) {
        i64 x = (((2 * n) / i) - i + 1) / 2;
        i64 sum = 0, temp = x;
        while (sum < n) {
          sum += temp;
          temp++;
        }

        if (sum == n) {
          if (temp - 1 - x < min) {
            start = x;
            stop = temp - 1;
            min = stop - start;
          }
          // break;
        }
      }

      if (2 * n % i == 0) {
        i64 yeet = n / i;
        i64 x = (((2 * yeet) / i) - i + 1) / 2;
        i64 sum = 0, temp = x;
        while (sum < n) {
          sum += temp;
          temp++;
        }

        if (sum == n) {
          if (temp - 1 - x < min) {
            start = x;
            stop = temp - 1;
            min = stop - start;
          }
          // break;
        }
      }
    }

    if (start == 0) {
      start = 1;
    }

    if (start == -1) {
      cout << "NU" << endl;
    } else {
      cout << start << " " << stop << endl;
    }
    */

    i64 min = 9999999999;
    i64 start = -1, stop;
    i64 x = (((2 * n) / p) - p + 1) / 2;
    if (2 * n % p == 0) {
      i64 x = (((2 * n) / p) - p + 1) / 2;
      i64 sum = 0, temp = x;
      while (sum < n) {
        sum += temp;
        temp++;
      }

      if (sum == n) {
        if (temp - 1 - x < min) {
          start = x;
          stop = temp - 1;
          min = stop - start;
        }
        // break;
      }
    }

    if (2 * n % p == 0) {
      i64 yeet = n / p;
      i64 x = (((2 * yeet) / p) - p + 1) / 2;
      i64 sum = 0, temp = x;
      while (sum < n) {
        sum += temp;
        temp++;
      }

      if (sum == n) {
        if (temp - 1 - x < min) {
          start = x;
          stop = temp - 1;
          min = stop - start;
        }
        // break;
      }
    }

    if (start == -1) {
      cout << "NU" << endl;
    } else {
      cout << start << endl;
    }
  }
}

// 2 * n = a * (a + 1)