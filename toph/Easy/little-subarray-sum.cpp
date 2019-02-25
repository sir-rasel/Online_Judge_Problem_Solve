#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int sum=0;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        if(i>=a and i<=b) sum+=num;
    }
    printf("%d\n",sum);
    return 0;
}
