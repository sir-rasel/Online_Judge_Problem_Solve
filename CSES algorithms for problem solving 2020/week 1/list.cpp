#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);

    if(n==1) printf("%d\n",n);
    else if(n<=3) printf("NO SOLUTION\n");
    else{
        vector<int>a;
        for(int i=2;i<=n;i+=2) a.push_back(i);
        for(int i=1;i<=n;i+=2) a.push_back(i);

        for(int i=0;i<a.size();i++){
            if(i+1 == a.size()) printf("%d\n",a[i]);
            else printf("%d ",a[i]);
        }
    }
    return 0;
}
