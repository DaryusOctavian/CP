#include <bits/stdc++.h>

using namespace ::std;

typedef int64_t i64;
typedef long double d6;

int main() {
    string s;
    cin >> s;
    i64 sp = 0, lc = 0, uc = 0, chr = 0;
    for (i64 i = 0; i < s.size(); i++) {
        if (s[i] == '_') {
            sp++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lc++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            uc++;
        } else {
            chr++;
        }
    }

    cout << fixed;
    cout.precision(10);
    cout << sp / (d6)s.size() << endl;
    cout << lc / (d6)s.size() << endl;
    cout << uc / (d6)s.size() << endl;
    cout << chr / (d6)s.size() << endl;
}