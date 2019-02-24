#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    double sum=0;
    for(int i=1;i<=n;i++){
        int num;
        scanf("%d",&num);
        sum+=num;
        printf("%lf\n",sum/i);
    }
    return 0;
}
