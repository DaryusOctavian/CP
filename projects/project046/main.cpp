#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    i64 pos[n];
    pos[0] = 1;
    for (i64 i = 1; i < n; i++) {
        i64 x;
        cin >> x;
        pos[x + 1]= i + 1;
    }
    for(i64 i = 0; i < n; i++) {
        cout << pos[i] << " ";
    }
    return 0;
}