#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 a, b;
    cin >> a >> b;
    i64 arr[a][b];
    vector<i64> firstLine(b);
    for(i64 i = 0; i < a; i++) {
        cin >> arr[i][0];
        if(i == 0) {
            firstLine[0] = arr[i][0];
        }
        for(i64 j = 1; j < b; j++) {
            i64 x;
            cin >> x;
            arr[i][j] = arr[i][j - 1] + x;
            if(i == 0) {
                firstLine[j] = x;
            }
        }
    }

    vector<i64> srt;
    for(i64 j = 0; j < b; j++) {
        bool ok = true;
        for(i64 i = 1; i < a; i++) {
            if(arr[i - 1][j] != arr[i][j]) {
                ok = false;
                break;
            }
        }

        if(ok) {
            cout << j + 1 << endl;
            for(i64 k = 0; k < j + 1; k++) {
                srt.push_back(firstLine[k]);
            }
            break;
        }
    }

    sort(srt.begin(), srt.end());

    for(auto x: srt) {
        cout << x << " ";
    } cout << endl;
    return 0;
}