#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,num;
    scanf("%d",&n);
    int maxx=0;
    while(n--){
        scanf("%d",&num);
        maxx=max(maxx,num);
    }
    printf("%d\n",maxx);
    return 0;
}
