#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main(){
    char choice = 'A';
    vector<bool> founds(3, true);
    for(i64 i = 0; i < 1000; i++){
        cout << choice << endl;
        char a, b;
        cin >> a >> b;
        if(a == 'A' && b == '0') {
            founds[0] = false;
        }
        if(a == 'B' && b == '0') {
            founds[1] = false;
        }
        if(a == 'C' && b == '0') {
            founds[2] = false;
        }
        if(b == '1'){
            choice = a;
            founds.resize(3, true);
        } else {
            if(founds[0] && !founds[1] && !founds[2]) {
                choice = 'A';
            } else if(founds[1] && !founds[0] && !founds[2]) {
                choice = 'B';
            } else {
                choice = 'C';
            }
        }
    }
    return 0;
}