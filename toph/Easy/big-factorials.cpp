#include<bits/stdc++.h>
using namespace std;

int arr[1010];
void precal(){
    arr[0]=arr[1]=1;
    for(int i=2;i<1010;i++)
        arr[i]=(arr[i-1]*i)%10000;
}

int main(){
    precal();
    int num;
    scanf("%d",&num);
    printf("%d\n",arr[num]);
    return 0;
}
