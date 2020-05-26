#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>a;
    if(n==1) printf("1\n");
    if(n<=3) printf("NO SOLUTION\n");
    else if(n==4){
        printf("%d %d %d %d\n",3,1,4,2);
    }
    else{
        for(int i=1;i<=n;i+=2) a.push_back(i);
        for(int i=2;i<=n;i+=2) a.push_back(i);

        for(int i=0;i<n;i++){
            if(i+1==n) printf("%d\n",a[i]);
            else printf("%d ",a[i]);
        }
    }
    return 0;
}
