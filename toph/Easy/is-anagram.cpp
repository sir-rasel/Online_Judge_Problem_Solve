#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    if(a.size()==b.size()){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                printf("No\n");
                return 0;
            }
        }
        printf("Yes\n");
    }
    else  printf("No\n");
    return 0;
}
