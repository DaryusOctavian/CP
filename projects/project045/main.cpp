#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

ifstream fin("paritate.in");
ofstream fout("paritate.out");

typedef int64_t i64;

i64 parsed[8][255];

i64 _toi64(i64 a, i64 b, i64 c, i64 d, i64 e, i64 f, i64 g) {
    i64 sum = 0;
    sum += g;
    sum += f * 2;
    sum += e * 4;
    sum += d * 8;
    sum += c * 16;
    sum += b * 32;
    sum += a * 64;
    return sum;
}

int main() {
    string line;
    vector<bool> okTransfers;
    bool ok = true;
    fin >> line;
    for(i64 i = 0; i < line.size(); i++) {
        parsed[i % 8][i / 8] = line[i] - '0';
    }

    i64 blockNum = line.size() / 8;
    for(i64 i = 0; i < blockNum; i++) {
        i64 s = 0;
        for(i64 j = 1; j < 8; j++) {
            s += parsed[j][i];
        }
        if(s % 2 == parsed[0][i]) {
            okTransfers.push_back(true);
        } else {
            ok = false;
            okTransfers.push_back(false);
        }
    }

    if(ok) {
        fout << "DA" << endl;
        for(i64 i = 0; i < blockNum; i++) {
            char temp;
            temp = _toi64(parsed[1][i], parsed[2][i], parsed[3][i], parsed[4][i], parsed[5][i], parsed[6][i], parsed[7][i]);
            fout << temp;
        }
    } else {
        fout << "NU" << endl; 
        for(i64 i = 0; i < okTransfers.size(); i++) {
            if(!okTransfers[i]) {
                fout << i << " ";
            }
        }
    }

    return 0;
}
// paritate problema olimpiada info