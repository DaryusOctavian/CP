#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

typedef int64_t i64;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main() {
    i64 n0, n;
    fin >> n0;
    while (fin >> n) {
        if(n0 * n0 == n || n * n == n0) {
            fout << n << " " << n0 << endl;
        }
        n0 = n;
    }
    return 0;
}

/*
se citesc din fisier mai multe numere

se afiseaza toate perechiile de numere consecutive cu proprietatea
ca unul dintre cele 2 numere este patratul celuilalt
*/