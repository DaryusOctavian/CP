#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    string line, res;
    cin >> line;
    cout << line[0];
    for (i64 i = 0; i < line.length(); i++) {
        if (line[i] == '-') {
            cout << line[i + 1];
        }
    }
    cout << endl;
    return 0;
}