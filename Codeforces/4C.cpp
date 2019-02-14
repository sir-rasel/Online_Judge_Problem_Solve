#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    map<string,int>m;
    int test;
    scanf("%d",&test);
    string a;
    while(test--){
        cin>>a;
        if(m[a]==0){
            printf("OK\n");
            m[a]++;
        }
        else{
            cout<<a<<m[a]<<endl;
            m[a]++;
        }
    }
    return 0;
}
