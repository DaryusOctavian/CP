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
#include <string>

using namespace::std;

typedef int64_t i64;

ifstream fin ("input.txt");

int main() {
    string dir;
    i64 n, x = 0, y = 0;
    while(fin >> dir) {
        fin >> n;
        if(dir == "forward") {
            x += n;
        } else if(dir == "down") {
            y += n;
        } else if(dir == "up") {
            y -= n;
        } else {
            cout << "wrong input" << endl;
        }
    }

    cout << x * y << endl;
    return 0;
}