#include <iostream>
#include <string>

using namespace std;

typedef int64_t i64;

int main() {
    string line;
    cin >> line;
    i64 left = 0, right = 0;
    bool eye = false;
    for(i64 i = 0; i < line.size(); i++) {
        if(line[i] != '|') {
            eye = true;
        } else {
            if(!eye) {
                left++;
            } else {
                right++;
            }
        }
    }

    if(left == right) {
        cout << "correct" << endl;
    } else {
        cout << "fix" << endl;
    }
    return 0;
}