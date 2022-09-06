#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

ifstream fin{"input.txt"};

int main(){
    i64 n, a, b;
    cin >> n >> a >> b;
    vector<i64> v(n);
    for(i64 i = 0; i < n; i++) {
        cin >> v[i];
    }

    // bool rising;
    // i64 k = 1, peaks = 0, troughs = 0;
    // if(v[1] > v[0]) {
    //     rising = true;
    // } else {
    //     rising = false;
    // }
    // for(i64 i = 1; i < n; i++) {
    //     if(rising) {
    //         if(v[i] < v[i - 1]) {
    //             k++;
    //         } else {
    //             rising = false;
    //             if(k + 1 >= a) {
    //                 peaks++;
    //             }
    //             k = 1;
    //         }
    //     } else if(!rising) {
    //         if(v[i] > v[i - 1]) {
    //             k++;
    //         } else {
    //             rising = true;
    //             if(k + 1 >= b) {
    //                 troughs++;
    //             }
    //             k = 1;
    //         }
    //     }
    // }

    // cout << peaks << " " << troughs << endl;

    i64 peaks = 0, troughs = 0;
    for(i64 i = 0; i < n; i++) {
        bool add = true;
        i64 k = 1, x = v[i];
        for(i64 j = i - 1; j >= 0; j--) {
            if(v[j] < x) {
                x = v[j];
                k++;
            } else {
                break;
            }
        }
        if(k < a) {
            add = false;
        }

        k = 1, x = v[i];
        for(i64 j = i + 1; j < n; j++) {
            if(v[j] < x) {
                x = v[j];
                k++;
            } else {
                break;
            }
        }
        if(k < a) {
            add = false;
        }

        if(add) {
            peaks += 1;
        }


        add = true;
        k = 1, x = v[i];
        for(i64 j = i - 1; j >= 0; j--) {
            if(v[j] > x) {
                x = v[j];
                k++;
            } else {
                break;
            }
        }
        if(k < b) {
            add = false;
        }

        k = 1, x = v[i];
        for(i64 j = i + 1; j < n; j++) {
            if(v[j] > x) {
                x = v[j];
                k++;
            } else {
                break;
            }
        }
        if(k < b) {
            add = false;
        }

        if(add) {
            troughs += 1;
        }
    }

    cout << peaks << " " << troughs << endl;
    return 0;
}