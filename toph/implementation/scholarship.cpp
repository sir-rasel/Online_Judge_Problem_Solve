#include<bits/stdc++.h>
using namespace std;

int main(){
    double a[100],b,c;
    int i=0;
    while(cin>>b) a[i++]=b;
    i--;
    c=a[i];
    sort(a,a+i);
    int k=i;
    for(;i>0;i--){
        if(c/i<=a[k-i]){
            printf("%.2lf\n",c/i);
            break;
        }
        c-=a[k-i];
    }
    return 0;
}
