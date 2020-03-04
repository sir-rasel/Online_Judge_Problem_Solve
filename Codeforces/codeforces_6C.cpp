#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int t[n+5];
    for(int i=0;i<n;i++) scanf("%d",&t[i]);
    int alice=t[0];
    int bob=0;
    int a=1,b=0;
    int i=1,j=n-1;
    while(i<=j){
        if( alice>bob ) {
            bob+=t[j];
            j--;
            b++;
        }
        else {
            alice+=t[i];
            i++;
            a++;
        }
    }
    printf("%d %d\n",a,b);
    return 0;
}
