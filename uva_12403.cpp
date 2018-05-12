#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,sum=0;
    cin>>test;
    while(test--){
        string s;
        int money;
        cin>>s;
        if(s=="donate"){
            cin>>money;
            sum+=money;
        }
        if(s=="report") cout<<sum<<endl;
    }
    return 0;
}
