#include <iostream>
#include <math.h>

using namespace std;

typedef int64_t i64;

int main(){
    while(true){
        i64 n, b;
        cin >> n >> b;
        if(n == -1) break;
        i64 pop[n];
        i64 l = 1,r = 0;

        for(int i = 0;i < n;++i){
            cin >> pop[i];
            r = max(r,pop[i]);
        }
        
        while(l < r){
            i64 mid = (l + r) / 2;
            i64 k = 0;
            
            for(i64 i = 0;i < n; i++) {
                k += (pop[i] + mid - 1) / mid;
            }
            if(k > b) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        
        cout << l << endl;
    }
    
    return 0;
}