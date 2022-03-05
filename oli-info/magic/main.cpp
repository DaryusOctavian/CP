#include <fstream>
#include <iostream>

using namespace std;

typedef int64_t i64;

ifstream fin ("input.txt");
ofstream fout("output.txt");

int main() {
    i64 n;
    fin >> n;
    i64 patrat[n][n];
    for(i64 i = 0; i < n; i++) {
        for(i64 j = 0; j < n; j++) {
            fin >> patrat[i][j];
        }
    }

    i64 s = 0;
    for(i64 i = 0; i < n; i++) {
        s += patrat[i][0];
    }

    i64 temp1 = 0, temp2 = 0;
    for(i64 i = 0; i < n; i++) {
        temp1 = 0;
        temp2 = 0;
        for(i64 j = 0; j < n; j++) {
            temp1 += patrat[i][j];
            temp2 += patrat[j][i];
        }
        if(temp1 != s || temp2 != s) {
            cout << "NU" << endl;
            return 0;
        }
    }

    temp1 = 0, temp2 = 0;
    for(i64 i = 0; i < n; i++) {
        temp1 += patrat[i][i];
        temp2 += patrat[i][n - i - 1];
    }
    if(temp1 != s || temp2 != s) {
        cout << "NU" << endl;
        return 0;
    }

    cout << "DA" << endl;
    return 0;
}