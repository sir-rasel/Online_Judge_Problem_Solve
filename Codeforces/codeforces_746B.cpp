#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char word[n+5];
    for(int i=0;i<n;i++) scanf("%c",&word[i]);
    if(n%2==0){
        for(int i=n-2;i>=0;i-=2) printf("%c",word[i]);
        for(int i=1;i<n;i+=2) printf("%c",word[i]);
        printf("\n");
    }
    else{
        for(int i=n-2;i>=0;i-=2) printf("%c",word[i]);
        for(int i=0;i<n;i+=2) printf("%c",word[i]);
        printf("\n");
    }
    return 0;
}
