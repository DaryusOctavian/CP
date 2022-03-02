#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main(){
    i64 n;
    cin >> n;
    i64 i = 0;
    vector<i64> nums(n, ++i);
    for(i64 i = 0; i < nums.size(); i++){
        cout << nums.at(i) << " ";
    } cout << endl;
    return 0;
}