#include <iostream>
#include <fstream>

using namespace std;

typedef int64_t i64;

ifstream fin ("input.txt");

int main() {
    i64 a = 0;
    fin >> a;

    for (i64 i = 0; i < a; i++) {
        i64 x = 0, y = 0, s1 = 0, s2 = 0, s3 = 0;
        fin >> x >> y;
        for (i64 i = 1; i <= y; i++) {
            s1 += i;
        }
        for (i64 i = 1; i <= y * 2; i += 2) {
            s2 += i;
        }
        for (i64 i = 2; i <= y * 2; i += 2) {
            s3 += i;
        }
        cout << x << " " << s1 << " " << s2 << " " << s3 << endl;
    }
    return 0;
}