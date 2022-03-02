#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    for(i64 yes = 0; yes < n; yes++) {
        i64 a, nums[20];
        cin >> a;
        for(i64 i = 0; i < 20; i++) {
            cin >> nums[i];
        }

        // ins sort
        i64 res = 0;
        for(i64 i = 1; i < 20; i++) {
            i64 k = nums[i];
            i64 j = i - 1;
 
            while(j >= 0 && nums[j] > k) {
                nums[j + 1] = nums[j];
                j = j - 1;
                res++;
            }
            nums[j + 1] = k;
        }

        cout << a << " " << res << endl;
    }
    return 0;
}