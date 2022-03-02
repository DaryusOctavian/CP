#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef int64_t i64;

int main(){
    i64 n;
    cin >> n;
    i64 nums[n], maxs[n], mins[n];
    for(i64 i = 0; i < n; i++){
        cin >> nums[i];

    }
    maxs[0] = nums[0];
    for(i64 i = 1; i < n; i++){
        maxs[i] = max(maxs[i - 1], nums[i]);
    }
    mins[n - 1] = nums[n - 1];
    for(i64 i = n - 2; i >= 0; i--){
        mins[i] = min(mins[i + 1], nums[i]);
    }

    for(i64 i = 0; i < n; i++) {
        cout << nums[i] << " " << mins[i] << " " << maxs[i] << endl;
    }
    return 0;
}