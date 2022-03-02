#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef int64_t i64;

int main(){
    i64 a, b;
    cin >> a >> b;
    a++;b++;
    vector<pair<i64, i64>> x(a), y(b);
    x[0].first = 0;
    x[0].second = 0;

    for(i64 i = 1; i < a; i++){
        i64 m, n;
        cin >> m >> n;
        x[i].first = x[i-1].first + m;
        x[i].second = x[i-1].second + n;
    }

    y[b-1].first = 0;
    y[b-1].second = 0;
    for(i64 i = 1; i < b; i++){
        i64 m, n;
        cin >> m >> n;
        y[i].first = y[i-1].first + m;
        y[i].second = y[i-1].second + n;
    }

    for(i64 i = 0; i < a; i++) {
        cout << x[i].first << " " << x[i].second << endl;
    } cout << endl;
    for(i64 i = 0; i < b; i++) {
        cout << y[i].first << " " << y[i].second << endl;
    }
    return 0;
}