#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,pos,l,r;
    cin>>n>>pos>>l>>r;
    int ans;
    if(l==1 and r==n) ans=0;
    else{
        if( (l==1 and pos==r) or(r==n and pos==l) ) ans=1;
        else if(pos>=l and pos<=r){
            if(l==1) ans=(r-pos)+1;
            else if(r==n) ans=(pos-l)+1;
            else ans=min((pos-l)+1+(r-l)+1,(r-pos)+1+(r-l)+1);
        }
        else{
            if(pos>r){
                if(l==1) ans=(pos-r)+1;
                else ans=(pos-r)+1+(r-l)+1;
            }
            else if(pos<l){
                if(r==n) ans=(l-pos)+1;
                else ans=(l-pos)+1+(r-l)+1;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
