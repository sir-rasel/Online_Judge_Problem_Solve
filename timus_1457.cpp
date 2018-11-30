#include<bits/stdc++.h>
using namespace std;

typedef double dl;

int main(){
    dl n;
    cin>>n;
    dl sum=0;
    for(dl i=0;i<n;i++){
        dl pi;
        cin>>pi;
        sum+=pi;
    }
    dl ans=sum/n;
    printf("%.6f\n",ans);
    return 0;
}
