#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int>tram;
    int res=0;
    while(n--){
        int diameter;
        cin>>diameter;
        tram[diameter]++;
        if(tram[diameter]==4){
            res++;
            tram[diameter]-=4;
        }
    }
    cout<<res<<endl;
    return 0;
}
