#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n, m;
    cin >> n >> m;
    vector<i64> shop(n), joe(m);
    for (i64 i = 0; i < n; i++) {
        cin >> shop[i];
    }
    for(i64 i = 0; i < m; i++) {
        cin >> joe[i];
    }
    sort(shop.begin(),shop.end());
    sort(joe.begin(),joe.end());

    i64 res = 0;
    for(auto x: joe) {
        i64 l = 0, r = n - 1, temp = 0;
        i64 mid;
        do{
            mid = l + (r - l) / 2;
            if(x < shop[mid]) {
                r = mid - 1;
                temp = shop[mid];
            } else if(x > shop[mid]) {
                l = mid + 1;
                temp = shop[mid];
            } else {
                break;
            }
        } while(l <= r);

        if(x > shop[mid]) {
            res += shop[mid + 1] - x;
        } else if(x < shop[mid]) {
            res += shop[mid] - x;
        }
    }

    cout << res << endl;
    return 0;
}