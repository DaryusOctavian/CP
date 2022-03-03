#include <iostream>
#include <cmath>
using namespace std;
int main() { // cod Zed
    int n, m;
    while(true) {
        cin >> n >> m;
        if(n == 0 && m == 0) {
            break;
        }
        int j1[n], j2[m];
        for(int i = 0; i < n; i++) {
            cin >> j1[i];
        }
        for(int j = 0; j < m; j++) {
            cin >> j2[j];
        }
        int i = 0, j = 0, res = 0;
        while (i < n && j < m) {
            if(j1[i] == j2[j]) {
                res++;
                i++;
            }else if(j2[j] < j1[i]) {
                j++;
            } else {
                i++;
            }
        }
        cout << res << endl;
    }
    return 0;
}