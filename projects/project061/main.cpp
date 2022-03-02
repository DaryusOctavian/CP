#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    bool found[42];
    for (int i = 0; i < 42; i++) {
        found[i] = false;
    }
    for(i64 i = 0; i < 10; i++) {
        i64 n;
        cin >> n;
        found[(n % 42)] = true;
    }
    i64 res = 0;
    for(i64 i = 0; i < 42; i++) {
        if(found[i]) {
            res++;
        }
    }

    cout << res << endl;
    return 0;
}