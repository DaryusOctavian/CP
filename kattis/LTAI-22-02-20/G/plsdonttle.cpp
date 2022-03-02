#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    vector<i64> values(n), sorted(n);
    for (i64 i = 0; i < n; i++) {
        cin >> values[i];
        sorted[i] = values[i];
    }

    sort(sorted.begin(), sorted.end());

    vector<i64> dups;
    for(i64 i = 0; i < n - 1; i++) {
        if(sorted[i] == sorted[i + 1]) {
            i++;
            dups.push_back(sorted[i]);
        }
    }

    i64 res = n;
    for(auto x: dups) {
        i64 tf = 0, yeet = 0;
        for(i64 i = 0; i < n; i++) {
            if(values[i] == x) {
                if(yeet == 0){
                    yeet = 1;
                    tf = i;
                    continue;
                } else {
                    tf = i - tf;
                    break;
                }
            }
        }
        if(tf < res) {
            res = tf;
        }
    }

    cout << res << endl;
    return 0;
}