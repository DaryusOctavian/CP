#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

i64 memo[1000000];

i64 fib(i64 n) {
    i64 res;
    if(memo[n] != 0){
        return memo[n];
    }
    if(n == 1 || n == 2) {
        res = 1;
    }else {
        res = fib(n - 1) + fib(n - 2);
        memo[n] = res;
    }

    return res;
}

int main() {
    i64 x;
    cin >> x;
    cout << fib(x) << endl;
    return 0;
}