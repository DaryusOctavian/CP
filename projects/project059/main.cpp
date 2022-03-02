#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 _case = 1;
    i64 n;
    while(cin >> n) {
        i64 a;
        cin >> a;
        i64 _min = a;
        i64 _max = a;
        for(i64 i = 1; i < n; i++) {
            cin >> a;
            _min = min(a, _min);
            _max = max(a, _max);

        }

        cout << "Case " << _case << ": " << _min << " " << _max << " " << _max - _min << endl;
        _case++;
    }
    return 0;
}