#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int maximum=0;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        maximum = max(maximum,num);
    }
    printf("%d\n",maximum);
    return 0;
}
