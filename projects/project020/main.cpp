//#include <iostream>
#include <fstream>

using namespace std;

typedef int64_t i64;

ifstream fin ("input.txt");
ofstream fout ("output.txt");

int main() {
    i64 n = 0;
    fin >> n;
    for (i64 i = 0; i < n; i++) {
        i64 a, b;
        fin >> a >> b;
        a--;
        b--;
        i64 x = a, y = b;
        while(y) {
            i64 r = x % y;
            x = y;
            y = r;
        }
        i64 yes = (a / x) * b;
        i64 res;
        res = yes + 1 - (((yes / a) - 1) * ((yes / b) - 1) / 2);
        fout << res << endl;
    }
    return 0;
}