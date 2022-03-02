#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

typedef int64_t i64;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main() {
    i64 horizontalPosition = 0, verticalPosition = 0, verticalIndex = 0;
    string direction;
    while (fin >> direction) {
        i64 x;
        fin >> x;
        if (direction == "forward") {
            horizontalPosition += x;
            verticalPosition += (x * verticalIndex);
        } else if (direction == "down") {
            verticalIndex += x;
        } else {
            verticalIndex -= x;
        }
        
    }

    fout << horizontalPosition * verticalPosition << endl;
    
    return 0;
}