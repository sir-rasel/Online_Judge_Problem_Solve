#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    string s="";
    for(int i=0;i<n-1;i++) s.push_back('U');
    for(int i=0;i<m-1;i++) s.push_back('L');
    for(int i=0;i<n;i++){
        if(i%2==0)
            for(int j=0;j<m-1;j++) s.push_back('R');
        else for(int j=0;j<m-1;j++) s.push_back('L');
        if(i!=n-1) s.push_back('D');
    }
    printf("%d\n",s.length());
    cout<<s<<endl;
    return 0;
}
