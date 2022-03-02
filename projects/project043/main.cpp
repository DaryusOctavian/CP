#include <iostream>
#include <vector>
#include <fstream>

using namespace::std;

typedef int64_t i64;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main() {
    i64 n, i;
    fin >> n;
    i64 vec[n + 1];
    for(i = 0; i < n; i++) {
        fin >> vec[i + 1];
    }
    for(i = 1; i < n; i++) {
        for(i64 j = i + 1; j <= n; j++) {
            if(vec[i] > vec[j]) {
                swap(vec[i], vec[j]);
            }
        }
    }

    for(i = 1; i <= n; i++) {
        if(vec[i] % 2 == 0) {
            fout << vec[i] << " ";
        }
    }
    fout << endl;

    for(i = n; i > 0; i--) {
        if(vec[i] % 2 == 1) {
            fout << vec[i] << " ";
        }
    }
    
    fout.close();
    fin.close();
    return 0;
}
/*
se citesc din fisierul de intrare n numere memorate ca si in problema anterioara,
scrieti in fisierul de iesirte pe prima linie elemente pare in ordine crescatoare,
iar pe a2a linie elemente impare, tot in ordine descrescatoare
*/
