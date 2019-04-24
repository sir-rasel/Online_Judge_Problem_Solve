#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    pair<int,int>f(0,0),l(0,0);
    bool flag=false;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        if(!flag and num>0) {
            flag=true;
            f={num,i};
            l={num,i};
        }
        else if(flag and num>0) l={num,i};
    }
    if(f.first==0 or l.first==0) printf("Distance Between Two bits is : -1\n");
    else {
        bitset<8>fir=f.first,last=l.first;
        int firstPos,lastPos;
        for(int i=0;i<8;i++){
            if(fir[i]==1) {
                firstPos=7-i;
            }
        }
        for(int i=0;i<7;i++){
            if(last[i]==1) {
                lastPos=7-i;
                break;
            }
        }
        long long int ans = ((l.second*8)+lastPos)-((f.second*8)+firstPos)-1;
        if(ans==-1) printf("Distance Between Two bits is : %lld\n",0);
        else printf("Distance Between Two bits is : %lld\n",ans);
    }
    return 0;
}
