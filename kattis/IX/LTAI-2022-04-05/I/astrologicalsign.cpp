#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 tc;
  cin >> tc;

  for (i64 tcn = 0; tcn < tc; tcn++) {
    i64 a;
    string ans;
    cin >> a >> ans;
    if (ans == "Jan") {
      if (a <= 20) {
        cout << "Capricorn" << endl;
      } else if (a > 20) {
        cout << "Aquarius" << endl;
      }
    } else if (ans == "Feb") {
      if (a > 19) {
        cout << "Pisces" << endl;
      } else if (a < 20) {
        cout << "Aquarius" << endl;
      }
    } else if (ans == "Mar") {
      if (a < 21) {
        cout << "Pisces" << endl;
      } else if (a > 20) {
        cout << "Aries" << endl;
      }
    } else if (ans == "Apr") {
      if (a > 20) {
        cout << "Taurus" << endl;
      } else if (a <= 20) {
        cout << "Aries" << endl;
      }
    } else if (ans == "May") {
      if (a <= 20) {
        cout << "Taurus" << endl;
      } else if (a > 20) {
        cout << "Gemini" << endl;
      }
    } else if (ans == "Jun") {
      if (a > 21) {
        cout << "Cancer" << endl;
      } else if (a <= 21) {
        cout << "Gemini" << endl;
      }
    } else if (ans == "Jul") {
      if (a <= 22) {
        cout << "Cancer" << endl;
      } else if (a > 22) {
        cout << "Leo" << endl;
      }
    } else if (ans == "Aug") {
      if (a < 23) {
        cout << "Leo" << endl;
      } else if (a > 22) {
        cout << "Virgo" << endl;
      }
    } else if (ans == "Sep") {
      if (a < 22) {
        cout << "Virgo" << endl;
      } else if (a > 21) {
        cout << "Libra" << endl;
      }
    } else if (ans == "Oct") {
      if (a < 23) {
        cout << "Libra" << endl;
      } else if (a > 22) {
        cout << "Scorpio" << endl;
      }
    } else if (ans == "Nov") {
      if (a < 23) {
        cout << "Scorpio" << endl;
      } else if (a > 22) {
        cout << "Sagittarius" << endl;
      }
    } else if (ans == "Dec") {
      if (a < 22) {
        cout << "Sagittarius" << endl;
      } else if (a > 21) {
        cout << "Capricorn" << endl;
      }
    }
  }
}