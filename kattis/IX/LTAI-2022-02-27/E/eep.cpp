#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;
typedef long double d6;

int main() {
    i64 a, b;
    cin >> a >> b;
    vector<pair<i64, i64>> up(a), down(b);
    vector<i64> umaxTime(a + 1), dmaxTime(b + 1);
    umaxTime[0] = 0;
    dmaxTime[0] = 0;

    for(i64 i = 0; i < a; i++){
        cin >> up[i].first >> up[i].second;
        if(i != 0) {umaxTime[i] = umaxTime[i - 1] + up[i].second;}
    }
    for(i64 i = 0; i < b; i++){
        cin >> down[i].first >> down[i].second;
        if(i != 0) {dmaxTime[i] = dmaxTime[i - 1] + down[i].second;}
    }

    d6 l = 0, r = umaxTime[a];
    while(abs(l - r) < 1e-9) {
        d6 mid = (l + r) / 2.0;
        i64 uteem, uind, dteem, dind;
        for(i64 i = 0; i < umaxTime.size() - 1; i++) {
            if(umaxTime[i] <= mid && umaxTime[i + 1] > mid) {
                uteem = umaxTime[i];
                uind = i;
                break;
            }
        }
        for(i64 i = 0; i < dmaxTime.size() - 1; i++) {
            if(dmaxTime[i] <= mid && dmaxTime[i + 1] > mid) {
                dteem = dmaxTime[i];
                dind = i;
                break;
            }
        }

        
    }
    return 0;
}