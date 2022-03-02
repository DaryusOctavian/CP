#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef int64_t i64;

int main() {
    i64 a, b;
    cin >> a >> b;
    vector<i64> server_times, requests;
    for(i64 i = 0; i < a; i++) {
        i64 x;
        cin >> x;
        requests.push_back(x);
    }

    server_times.push_back(requests[0]);
    for(i64 i = 1; i < requests.size(); i++) {
        bool found = false;
        for(i64 j = 0; j < server_times.size(); j++) {
            if(requests.at(i) - 1000 >= server_times.at(j)) {
                found = true;
                server_times.at(j) = requests.at(i);
                break;
            }
        }

        if(!found) {
            server_times.push_back(requests.at(i));
        }
    }

    cout << ceil(server_times.size() / (double)b) << endl;
    return 0;
}