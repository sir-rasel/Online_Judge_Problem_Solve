#include<bits/stdc++.h>
using namespace std;

bool t[1000000];

int main(){
    int test;
    cin>>test;
    for(int k=1; k<=test; k++){
        int c=0;
        memset(t,false,sizeof(t));
        for(int j=0; j<3; j++){
            int a,b;
            cin>>a>>b;
            for(int i=a; i<=b; i++){
                if(t[i]==false){
                    t[i]=true;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
