#include<bits/stdc++.h>
using namespace std;

int main(){
    int l=0,r=1000000;
    while(true){
        int mid = (l+r)/2;
        printf("%d\n",mid);
        string s;
        cin>>s;
        if(s=="Bingo!") break;
        else if(s=="Bigger") l=mid+1;
        else r=mid-1;
    }
    return 0;
}
