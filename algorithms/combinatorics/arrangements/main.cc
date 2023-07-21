// arrangements.cc

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> mask(n);

    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }
    for (int i = n - k; i < n; i++) {
        mask[i] = i - n + k + 1;
    }

    do {
        for (int i = 0; i < n; i++) {
            if (mask[i] > 0) {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    } while (next_permutation(mask.begin(), mask.end()));

    return 0;
}