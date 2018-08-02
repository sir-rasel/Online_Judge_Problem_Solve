#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        string n;
        long long int div,temp=0;
        cin>>n>>div;
        int j;
        if(n[0]=='-') j=1;
        else j=0;
        for(j;j<n.length();j++){
            temp = temp*10 + (n[j]-'0');
            temp = temp%div;
        }
        if(temp) printf("Case %d: not divisible\n",i);
        else printf("Case %d: divisible\n",i);
    }
    return 0;
}
