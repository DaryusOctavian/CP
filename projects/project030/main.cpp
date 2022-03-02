#include <iostream>
#include <string>
using namespace::std;
typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    while(n > 0) {
        i64 r = 1, fact = 1;
        i64 twos = 0, fives = 0;
        for (i64 i = 2; i <= n; i++) {
            r = i;
            while (r % 5 == 0) {
                r = r / 5;
                fives++;
            }
            while (r % 2 == 0) {
                r = r / 2;
                twos++;
            }
            fact = (fact * r) % 1000;
            
        }
        i64 tfIndex = (twos - fives);
        while (tfIndex--) {
            fact = (fact * 2) % 1000;
        }
        
        cout << fact % 10 << endl;
        cin >> n;
    }
    return 0;
}