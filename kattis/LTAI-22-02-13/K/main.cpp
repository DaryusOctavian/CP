#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n, m, a, c, prevx;
    vector<i64> nums;
    cin >> n >> m >> a >> c >> prevx;
    for(i64 i = 0; i < n; i++) {
        nums.push_back((a * prevx + c) % m);
        prevx = nums.at(nums.size() - 1);
    }

//    for(i64 i = 1; i < nums.size(); i++) {
//        cout << nums.at(i) << " ";
//    } cout << endl;

    int cnt =0;
    for(auto e: nums){
        i64 l = 0;
        i64 r = n - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] == e){
                cnt++;
                break;
            } else if(nums[mid] > e) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
