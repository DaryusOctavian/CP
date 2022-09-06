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

    i64 res = n;
    for(i64 i = 0; i < n - 1; i++){
        for(i64 j = i + 1; j < n; j++){
            if (nums[i] == nums[j]){
                if(j - i < res) {
                    res = j - i;
                }
            }
        }
    }

    cout << res << endl;
    return 0;
}