#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    vector<i64> desks;
    cin >> n;
    for(i64 i = 0; i < n; i++) {
        i64 x;
        cin >> x;
        desks.push_back(x);
    }

    i64 res = 1;
    for(i64 i = 0; i < desks.size() - 1; i++) {
        if(desks.at(i) > desks.at(i + 1)) {
            res++;
        }
    }

    cout << res << endl;
    return 0;
}