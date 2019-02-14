#include <bits/stdc++.h>
using namespace std;

int main(){
    int t1=0,t2=0,flag=0;
    char c;
    while(scanf("%c",&c) and c!='\n'){
        if(c=='0'){
            t1++;
            t2=0;
            if(t1>=7 or t2>=7) flag++;
        }
        else {
            t2++;
            t1=0;
            if(t1>=7 or t2>=7) flag++;
        }
    }
    if(flag!=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
