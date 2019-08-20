#include<bits/stdc++.h>
using namespace std;

int data[60001];

int main(){
    int n;
    scanf("%d",&n);
    data[1]=1;
    data[2]=2;
    for (int i=3;i<=n;++i) {
        int min=data[i-1]+1;
        for (int j=2;j<=245;++j) {
            if (i>=j*j){
               if (min>data[i-j*j]+1) min=data[i-j*j]+1;
            }
            else break;
        }
        data[i]=min;
    }
    printf("%d\n",data[n]);
    return 0;
}
