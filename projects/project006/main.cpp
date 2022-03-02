#include <fstream>

using namespace::std;

typedef int64_t i64;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main() {
    i64 x, s = 0;
    while(fin >> x) {
        s += x;
    }
    fout << s << endl;
    return 0;
}