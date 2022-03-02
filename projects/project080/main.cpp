#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 nums[5];
    for (i64 i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    while(true) {
        i64 timesExec = 0;
        for (i64 i = 0; i < 4; i++) {
            if(nums[i] > nums[i + 1]) {
                swap(nums[i], nums[i + 1]);
                for(i64 k = 0; k < 5; k++) {
                    cout << nums[k] << " ";
                }
                cout << endl;
                timesExec++;
            }
        }

        if(timesExec == 0) {
            break;
        }
    }
        
    return 0;
}