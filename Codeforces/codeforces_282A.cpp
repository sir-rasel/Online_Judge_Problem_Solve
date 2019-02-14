#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,x=0;
    cin>>test;
    getchar();
    while(test--){
        char c;
        int flag=0;
        while(scanf("%c",&c) and c!='\n'){
            if(c=='+') flag++;
            else if(c=='-') flag--;
            else continue;
            if(flag==2) x++;
            else if(flag==-2) x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
