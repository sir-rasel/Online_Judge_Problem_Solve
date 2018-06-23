#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int number=0;
    map<int,int>index;
    if(k==1 or l==1 or m==1 or n==1) number=d;
    else {
        for(int i=k;i<=d;i+=k){
            if(index[i]==0){
                number++;
                index[i]++;
            }
        }
        for(int i=l;i<=d;i+=l){
            if(index[i]==0){
                number++;
                index[i]++;
            }
        }
        for(int i=m;i<=d;i+=m){
            if(index[i]==0){
                number++;
                index[i]++;
            }
        }
        for(int i=n;i<=d;i+=n){
            if(index[i]==0){
                number++;
                index[i]++;
            }
        }
    }
    cout<<number<<endl;
    return 0;
}
