#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef int64_t i64;

int main() {
    i64 x[8] = {2, 2, -2, -2, 1, -1, 1, -1};
    i64 y[8] = {1, -1, 1, -1, 2, 2, -2, -2};
    vector<string> t(5);
    for (i64 i = 0; i < 5; i++) {
        cin >> t.at(i);
    }

    i64 res = 0, coclender = 0;
    for(i64 i = 0; i < 5; i++) {
        for(i64 j = 0; j < 5; j++) {
            if (t[i][j] == 'k') {
                coclender++;
                for(i64 p = 0; p < 8; p++) {
                    if((i + x[p] > 0 && i + x[p] < 5) && (j + y[p] > 0 && j + y[p] < 5)) {
                        if(t[i + x[p]][j + y[p]] == 'k') {
                            res++;
                        }
                    }
                }

            }
        }
    }

    if(res == 0 && coclender == 9) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }
    return 0;
}