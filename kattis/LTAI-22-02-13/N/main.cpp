#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef int64_t i64;

// ifstream cin("input.txt");
// ofstream cout("output.txt");

int main() {
    i64 x;
    vector<bool> nums;
    nums.resize(11, true);
    while(cin >> x && x != 0) {
        string yeet, reply;
        cin >> yeet >> reply;
        if(reply == "low"){
            for(i64 i = 0; i <= x; i++){
                nums[i] = false;
            }
        } else if(reply == "high"){
            for(i64 i = x; i <= 10; i++) {
                nums[i] = false;
            }
        } else {
            if(nums[x] == true){
                cout << "Stan may be honest" << endl;
            } else {
                cout << "Stan is dishonest" << endl;
            }
            nums.clear();
            nums.resize(11, true);
        }
    }
    return 0;
}