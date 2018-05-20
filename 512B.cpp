#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a,b,c;
    int n,num,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        a.push_back(num);
    }
    sort(a.begin(),a.begin()+n);
    for(i=0;i<n-1;i++){
        scanf("%d",&num);
        b.push_back(num);
    }
    sort(b.begin(),b.begin()+(n-1));
    for(i=0;i<n-2;i++){
        scanf("%d",&num);
        c.push_back(num);
    }
    sort(c.begin(),c.begin()+(n-2));
    for(i=0;i<n-1;i++){
        if(a[i]!=b[i]){
            printf("%d\n",a[i]);
            break;
        }
    }
    if(i==n-1) printf("%d\n",a[n-1]);
    for(i=0;i<n-2;i++){
        if(b[i]!=c[i]){
            printf("%d\n",b[i]);
            break;
        }
    }
    if(i==n-2) printf("%d\n",b[n-2]);
    return 0;
}
