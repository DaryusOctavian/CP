#include <iostream>
#include <vector>
#include <utility>
#include <deque>

using namespace std;

typedef int64_t i64;

int main() {
    deque<i64> d;
    i64 n;
    cin >> n;
    for(i64 i = 0; i < n; i++) {
        i64 x;
        cin >> x;
        d.push_back(x);
    }

    i64 k;
    cin >> k;
    for(i64 i = 0; i < k; i++) {
        d.push_front(d.at(d.size() - 1));
        d.pop_back();
    }

    for(i64 i = 0; i < d.size(); i++) {
        cout << d.at(i) << " ";
    }
    cout << endl;
    return 0;
}