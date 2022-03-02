#include <bits/stdc++.h>

using namespace std;


int main() {
    int x[8]={2,2,-2,-2,1,-1,1,-1};
    int y[8]={1,-1,1,-1,2,2,-2,-2};
    int c=0,n=0;
    
    vector<string> t(5);
for(int i = 0; i <5;i++){
    cin>>t[i];
}
for(int i = 0; i <5;i++){
    for(int j = 0; j <5;j++){
        if (t[i][j] == 'k'){
            n++;
            for(int p=0;p<8;p++){
            if((i+x[p]<0 && i+x[p]<5)&&(j+y[p]<0 && j+y[p]<5)){
                if(t[i+x[p]][j+y[p]]=='k')c++;
            }
            }
        }
    }
}
if(c == 0 && n==9){
    cout<<"valid"<<endl;
}else{
    cout<<"invalid"<<endl;
}

    return 0;
}