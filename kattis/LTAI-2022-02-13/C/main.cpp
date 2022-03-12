#include <iostream>
#include <string>

using namespace std;

typedef int64_t i64;

int main() {
    string input;
    cin >> input;
    for(i64 i = 1; i < input.size(); i++) {
        if(input[i] == ')') {
            if(input[i - 1] == ':' || input[i - 1] == ';') {
                cout << i - 1 << endl;
            }

            if(i > 1) {
                if(input[i - 1] == '-' && (input[i - 2] == ':' || input[i - 2] == ';')) {
                    cout << i - 2 << endl;
                }
            }
        }
    }
    return 0;
}