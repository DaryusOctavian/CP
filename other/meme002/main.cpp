#include <bits/stdc++.h>

using namespace std;
typedef int64_t i64;
using d6= long double;

int main(){
    i64 n;
    
    cin >> n;

    vector<i64> v(n);
    for(i64 i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    vector<i64> a(100);

    for(i64 i=0;i<n;i++){        
        if(v[i]%2==0){
            a[i]=v[i];
            
        }
    }
    for(i64 i=0;i<n;i++){
        
    }
}