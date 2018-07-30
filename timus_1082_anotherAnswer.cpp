#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("%d ",(i*i+i*3-4)/2);
    printf("\n");
    return 0;
}
