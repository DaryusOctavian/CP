#include <bits/stdc++.h>

using namespace std;

// permutating an array {1, 2, 3...}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    do {
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}