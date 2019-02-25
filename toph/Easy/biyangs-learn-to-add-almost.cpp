#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int asize = a.size();
    int bsize = b.size();
    for(int i=0;i<asize and i<bsize;i++){
        int na = a[i]-'0';
        int nb = b[i]-'0';
        if(na+nb>9){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}
