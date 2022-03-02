#include <iostream>
#include <cmath>

using namespace std;

typedef int64_t i64;

int main(){
    i64 xPos, yPos;
    cin >> xPos >> yPos;
    i64 yesx, yesy;
    cin >> yesx;
    i64 xTimes[yesx];
    for(i64 i = 0; i < yesx; i++){
        cin >> xTimes[i];
    }
    cin >> yesy;
    i64 yTimes[yesy];
    for(i64 i = 0; i < yesy; i++){
        cin >> yTimes[i];
    }

    i64 i = 0, j = 0;
    bool xMoving = false, yMoving = false;
    for(i64 seconds = 0; seconds < 100000000; seconds++) {
        if(xMoving) {
            xPos++;
        }
        if(yMoving) {
            yPos++;
        }

        if(seconds == xTimes[i] && i != yesx){
            xMoving = !xMoving;
            i++;
        }
        if(seconds == yTimes[j] && j != yesy){
            yMoving = !yMoving;
            j++;
        }

        if(abs(xPos - yPos) < 5) {
            cout << "bumper tap at time " << seconds << endl;
            return 0;
        }
    }

    cout << "safe and sound" << endl;
    return 0;
}