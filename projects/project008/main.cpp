#include <iostream>
#include <fstream>

using namespace::std;

typedef int64_t i64;

ifstream fin ("input.txt");
ofstream fout ("output.txt");

int main() {
    i64 a, b;
    while (fin >> a) {
        b += a;
    }
    fout << b << endl;
    return 0;
}