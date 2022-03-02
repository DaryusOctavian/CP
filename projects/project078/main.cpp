#include <iostream>
#include <map>
#include <utility>
#include <string>

using namespace std;

typedef int64_t i64;

int main() {
    map<string, i64> m;
    while(!cin.eof()) {
        string s;
        getline(cin, s);
        if(s == "***") break;
        m[s]++;
    }

    i64 gt = 0, cnt = 0;
    string winner;
    for(auto kv: m) {
        if(kv.second > gt) {
            gt = kv.second;
            winner = kv.first;
            cnt = 1;
        } else if(kv.second == gt) {
            cnt++;
        }
    }

    if(cnt > 1) {
        cout << "Runoff!" << endl;
    } else {
        cout << winner << endl;
    }
    return 0;
}