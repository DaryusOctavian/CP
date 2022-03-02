#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;
typedef long double d6;

int main() {
    i64 a, b;
    cin >> a >> b;
    vector<pair<i64, i64>> up(a + 1), down(b + 1);
    i64 h, t;
    up[0].first = 0;
    up[0].second = 0;
    for(i64 i = 1; i <= a; i++) {
        cin >> h >> t;
        up[i].first = up[i - 1].first + t;
        up[i].second = up[i - 1].second + h;
    }
    down[0].first = 0;
    down[0].second = up[a].second;
    for(i64 i = 1; i <= b; i++) {
        cin >> h >> t;
        down[i].first = down[i - 1].first + t;
        down[i].second = down[i - 1].second - h;
    }

    // cout << endl;
    // for(auto x: up) {
    //     cout << x.first << " " << x.second << endl;
    // }cout << endl;
    // for(auto x: down) {
    //     cout << x.first << " " << x.second << endl;
    // }cout << endl;


    d6 l = 0, r = up[a].first, res = 0, eep = 10;
    while(abs(l - r) > pow(10, -7)) {
        d6 mid = (l + r) / 2.0;
        pair<i64, i64> upInterval, downInterval;
        for(i64 i = 0; i < up.size() - 1; i++) {
            if(up[i].first <= mid && up[i+1].first > mid) {
                upInterval.first = i;
                upInterval.second = i + 1;
                break;
            }
        }
        for(i64 i = 0; i < down.size() - 1; i++) {
            if(down[i].first <= mid && down[i+1].first > mid) {
                downInterval.first = i;
                downInterval.second = i + 1;
                break;
            }
        }

        // cout << upInterval.first << " " << upInterval.second << endl;
        // cout << downInterval.first << " " << downInterval.second << endl;

        d6 upK = (d6)up[upInterval.second].second - (d6)up[upInterval.first].second;
        upK /= (d6)up[upInterval.second].first - (d6)up[upInterval.first].first;
        d6 downK = (d6)down[downInterval.second].second - (d6)down[downInterval.first].second;
        downK /= (d6)down[downInterval.second].first - (d6)down[downInterval.first].first;
        downK = abs(downK);

        // cout.precision(8);
        // cout << fixed;
        // cout << upK << " " << downK << endl;
        // cout << upK * mid << " " << downK * mid << " " << mid << endl;
        // cout << l << " " << r << endl;

        d6 dup = upK * abs(mid - up[upInterval.first].first) + up[upInterval.first].second;
        d6 ddown = down[downInterval.first].second - downK * abs(mid - down[downInterval.first].first);
        // cout << dup << " " << ddown << endl;
        // cout << endl;

        if(ddown > dup) {
            l = mid;
        } else {
            r = mid;
            res = mid;
        }

        
    }
    
    cout.precision(6);
    cout << fixed;
    cout << res << endl;
    return 0;
}

/*

*/