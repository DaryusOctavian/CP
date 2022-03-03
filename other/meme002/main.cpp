#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;
using d6= long double;

int main(){
    i64 n;
    
    cin >> n;

    vector<i64> v(n);
    for(i64 i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    vector<i64> a;
    for(i64 i = 0;i < n; i++) {        
        if(v[i] % 2 == 0){
            a.push_back(v[i]);
        }
    }
    for(i64 i = 0; i < a.size(); i++) {
        cout << a[i] << " ";    
    } cout << endl;
    
}

/*
v[i] == v.at(i)
*/