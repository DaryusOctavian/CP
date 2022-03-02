/* 
  _____                              ____       _                                 
 |  __ \                            / __ \     | |                                
 | |  | | __ _ _ __ _   _ _   _ ___| |  | | ___| |_ __ ___   ___   _  __ _ _ __   
 | |  | |/ _` | '__| | | | | | / __| |  | |/ __| __/ _` \ \ / / | | |/ _` | '_ \  
 | |__| | (_| | |  | |_| | |_| \__ \ |__| | (__| || (_| |\ V /| |_| | (_| | | | | 
 |_____/ \__,_|_|   \__, |\__,_|___/\____/ \___|\__\__,_| \_/  \__, |\__,_|_| |_| 
                     __/ |                                      __/ |             
                    |___/                                      |___/              
*/

#include <iostream>
#include <fstream>

using namespace::std;

typedef int64_t i64;

ifstream fin ("input.txt");
ofstream fout ("output.txt");
ifstream oin ("output.txt");

int main() {
    i64 x, x0 = -1, counter = 0, currCase = 0;
    i64 a = 0, b = 0, c = 0, d = 0;
    while(fin >> x) {
        if(currCase == 0) {
            a += x;
        } else if(currCase == 1) {
            a += x;
            b += x;
        } else if(currCase % 4 == 0) {
            a += x;
            c += x;
            d += x;
            fout << b << endl;
            b = 0;
        } else if (currCase % 4 == 1) {
            a += x;
            b += x;
            d += x;
            fout << c << endl;
            c = 0;
        } else if (currCase % 4 == 2) {
            a += x;
            b += x;
            c += x;
            fout << d << endl;
            d = 0;
        } else {
            b += x;
            c += x;
            d += x;
            fout << a << endl;
            a = 0;
        }
        currCase += 1;
    }

    while (oin >> x) {
        if (x > x0) {
            counter += 1;
        }

        x0 = x;
    }
    
    cout << counter - 1 << endl;
    return 0;
}