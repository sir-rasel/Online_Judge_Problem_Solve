#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if(n%4!=0) printf("No\n");
    else if(n%100==0 and n%400!=0) printf("No\n");
    else printf("Yes\n");
    return 0;
}
