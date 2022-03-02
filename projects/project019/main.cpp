#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 a, b;
    cin >> a >> b;
    i64 map[a][b];
    for(i64 i = 0; i < a; i++) {
        for(i64 j = 0; j < b; j++) {
            map[i][j] = 0;
        }
    }
    i64 n = 0;
    i64 m = 0;
    i64 dir = 0;
    do {
        map[n][m] = 1;

        if(dir == 0) {
            n++;
            m++;
        } else if(dir == 1) {
            n--;
            m++;
        } else if(dir == 2) {
            n--;
            m--;
        } else if(dir == 3) {
            n++;
            m--;
        } 

        if(dir == 0) {
            if(n == a && m == b) {
                dir = 2;
            } else if(n == a) {
                dir = 1;
            } else if(m == b) {
                dir = 3;
            }
        }
        if(dir == 1) {
            if(n == 0 && m == 16) {
                dir = 3;
            } else if(n == 0) {
                dir = 0;
            } else if(m == b) {
                dir = 2;
            }
        }
        if(dir == 2) {
            if(n == 0 && m == 0) {
                dir = 0;
            } else if(n == 0) {
                dir = 3;
            } else if(m == 0) {
                dir = 1;
            }
        }
        if(dir == 3) {
            if(n == a && m == 0) {
                dir = 1;
            } else if(n == a) {
                dir = 2;
            } else if(m == 0) {
                dir = 0;
            }
        }

        map[n][m] = 1;

    } while(!(n == 0 && m == 0));

    i64 res = 0;
    for(i64 i = 0; i < a; i++) {
        for(i64 j = 0; j < b; j++) {
            if(map[i][j] == 1) {
                res++;
            }
        }
    }

    cout << res << endl;
    return 0;
}