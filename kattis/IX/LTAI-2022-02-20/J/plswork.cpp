#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main(){
    for(i64 i = 0; i < 1000; i++){
        char choice = 'A' + rand() % 3;
        cout << choice << endl;
        char res, state;
        cin >> res >> state;
        if (state == '1') {
            cout << res << endl;
        } else {
            char rc = 'A' + rand() % 3;
            while (rc == choice || rc == res) {
                rc = 'A' + rand() % 3;
            }
            cout << rc << endl;
        }
        cin >> res >> state;
    }
    return 0;
}