#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main(){
    i64 n, a, b;
    cin >> n >> a >> b;
    vector<i64> v(n);
    for(i64 i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool rising;
    i64 k = 1, peaks = 0, troughs = 0;
    if(v[1] > v[0]) {
        rising = true;
    } else {
        rising = false;
    }
    for(i64 i = 1; i < n; i++) {
        if(rising) {
            if(v[i] < v[i - 1]) {
                k++;
            } else {
                rising = false;
                if(k + 1 >= a) {
                    peaks++;
                }
                k = 1;
            }
        } else if(!rising) {
            if(v[i] > v[i - 1]) {
                k++;
            } else {
                rising = true;
                if(k + 1 >= b) {
                    troughs++;
                }
                k = 1;
            }
        }
    }

    cout << peaks << " " << troughs << endl;
    return 0;
}