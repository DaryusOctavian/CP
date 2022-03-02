#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main(){
    i64 n;
    cin >> n;
    vector<i64> nums(n);
    for(i64 i = 0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    vector<i64> res;

    for(i64 i = 0; i < n; i++){
        if(n - i != i){
            res.push_back(nums[n - i - 1]);
            res.push_back(nums[i]);
        } else {
            res.push_back(nums[i]);
        }
    }

    for(i64 i = n - 1; i >= 0; i--){
        cout << res[i] << " ";
    } cout << endl;
    return 0;
}