#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

using ll = long long;

// code from https://usaco.guide/silver/more-prefix-sums?lang=cpp
int main(){

	int n;

	cin >> n;

	vector<long long> pfx(n + 1);  // prefix sum array initially filled with 0's

	for (int i = 1; i <= n; i++){

		ll x;

		cin >> x;

		pfx[i] = pfx[i - 1] + x;  // compute the prefix sum at each element

	}


	ll max_subarray_sum = pfx[1];

	ll min_prefix_sum = pfx[0];

	for (int i = 1; i <= n; i++) {

		// Max subarray sum is the maximum difference between two prefix sums

		max_subarray_sum = max(max_subarray_sum, pfx[i] - min_prefix_sum);

		min_prefix_sum = min(min_prefix_sum, pfx[i]);

	}

	cout << max_subarray_sum << endl;

}

/* my code (:
#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    vector<i64> v(n);
    for (i64 i = 0; i < n; i++) {
        cin >> v[i];
    }

    i64 mn = 1e9, mx = -1e9;
    mn = min(mn, v[0]);
    mx = max(mx, v[0]);
    for(i64 i = 1; i < n; i++) {
        v[i] += v[i - 1];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }


    cout << max(mx - mn, mx) << endl;
    
    return 0;
}
*/