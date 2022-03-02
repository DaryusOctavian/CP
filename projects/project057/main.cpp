#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    vector<i64> dwarves;
    i64 sum = 0;
    for(i64 i = 0; i < 9; i++) {
        i64 x;
        cin >> x;
        dwarves.push_back(x);
        sum += x;
    }

    for(i64 i = 0; i < 9; i++) {
        for(i64 j = 0; j < 9; j++) {
            if(j != i) {
                if(sum - dwarves.at(i) - dwarves.at(j) == 100) {
                    for(i64 k = 0; k < 9; k++) {
                        if(k != i && k != j) {
                            cout << dwarves.at(k) << " ";
                        }
                    }
                    cout << endl;
                    return 0;
                }
            }
        }
    }
}