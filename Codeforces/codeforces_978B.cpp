#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int ans=0;
    for(int i=0;i<n;i++){
        int counter=0;
        for(i;i<n and s[i]=='x';i++,counter++);
        if(counter>=3) ans+=(counter-2);
    }
    printf("%d\n",ans);
    return 0;
}
