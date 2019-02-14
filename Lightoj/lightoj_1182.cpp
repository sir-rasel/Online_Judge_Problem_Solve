#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int n;
        scanf("%d",&n);
        bitset<32>temp(n);
        printf("Case %d: ",i);
        if(temp.count()%2==0) printf("even\n");
        else printf("odd\n");
    }
    return 0;
}
