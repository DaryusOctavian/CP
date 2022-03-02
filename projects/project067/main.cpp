#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    vector<i64> v;
    
    for(i64 i = 0; i < n; i++) {
        i64 x;
        cin >> x;
        v.push_back(x);
    }

    vector<i64> maxs(n), mins(n);
    mins[0] = v[0];
    maxs[n - 1] = v[n - 1];
    for(i64 i = 1; i < v.size(); i++) {
        mins[i] = max(mins[i - 1], v[i]);
    }

    for(i64 i = n - 2; i >= 0; i--) {
        maxs[i] = min(maxs[i + 1], v[i]);
    }

    i64 res = 0;
    if(v[0] < maxs[1]) {
        res++;
    }
    if(v[v.size() - 1] > mins[v.size() - 2]) {
        res++;
    }
    for(i64 i = 1; i < v.size() - 1; i++) {
        if(v[i] > mins[i - 1] && v[i] < maxs[i + 1]) {
            res++;
        }
    }

    cout << res << endl;
    return 0;
}

/*
-- alternative variant--

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    i64 v[n];
    
    for(i64 i = 0; i < n; i++) {
        cin >> v[i];        
    }

    i64 maxs[n], mins[n];
    mins[0] = v[0];
    maxs[n - 1] = v[n - 1];
    for(i64 i = 1; i < n; i++) {
        mins[i] = max(mins[i - 1], v[i]);
    }

    for(i64 i = n - 2; i >= 0; i--) {
        maxs[i] = min(maxs[i + 1], v[i]);
    }

    i64 res = 0;
    if(v[0] < maxs[1]) {
        res++;
    }
    if(v[n - 1] > mins[n - 2]) {
        res++;
    }
    for(i64 i = 1; i < n - 1; i++) {
        if(v[i] < mins[i - 1] && v[i] > maxs[i + 1]) {
            res++;
        }
    }

    cout << res << endl;
    return 0;
}
*/