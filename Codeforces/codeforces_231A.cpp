#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,counter=0;
    cin>>test;
    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a==1 and b==1) or (a==1 and c==1) or (b==1 and c==1)) counter++;
    }
    cout<<counter<<endl;
    return 0;
}
