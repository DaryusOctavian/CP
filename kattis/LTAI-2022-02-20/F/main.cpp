#include <iostream>

using namespace std;

typedef int64_t i64;

int main(){
    i64 a, b;
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        i64 x[a], y[b];
        for(i64 i = 0; i < a; i++){
            cin >> x[i];
        }
        for(i64 i = 0; i < b; i++){
            cin >> y[i];
        }

        i64 i = 0, j = 0, res = 0;
        while(i < a && j < b){
            if(x[i] == y[j]){
                res++;
                i++;
            } else if(x[i] < y[j]) {
                i++;
            } else {
                j++;
            }
        }

        cout << res << endl;
    }

    return 0;
}