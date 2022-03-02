#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n, m;
    cin >> n >> m;
    vector<i64> cans(n), joe(m);
    for(i64 i = 0; i < n; i++) {
        cin >> cans[i];
    }
    for(i64 i = 0; i < m; i++) {
        cin >> joe[i];
    }

    sort(cans.begin(), cans.end());
    sort(joe.begin(), joe.end());

    i64 res;
    for(auto k: joe){
        i64 l = 0, r = n - 1, mid;
        while(l < r){
            mid = l + (r - l) / 2;
            if(cans[mid] < k) {
                r = mid - 1;
            } else if(cans[mid] > k) {
                l = mid + 1;
            } else {
                break;
            }
        }

        if(k > cans[mid]){
            res += cans[mid + 1] - k;
        } else {
            res += cans[mid] - k;
        }
    }

    cout << res << endl;
    return 0;
}