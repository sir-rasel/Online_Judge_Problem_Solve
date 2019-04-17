#include<bits/stdc++.h>
#define N 1000005
using namespace std;

int main(){
    char c[N];
    int arr[10]={0},maxx=0;
    scanf("%s",c);
    for(int i=0;c[i]!='\0';i++){
        arr[c[i]-'0']++;
        maxx=max(maxx,arr[c[i]-'0']);
    }
    for(int i=0;i<10;i++){
        if(arr[i]==maxx){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
