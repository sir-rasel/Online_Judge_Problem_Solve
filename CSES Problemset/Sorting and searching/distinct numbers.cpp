#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    int num,ans=0;
    map<int,bool> check;
    while(n--){
        scanf("%d",&num);
        if(check.count(num)==0)
            ans++;
        check[num]=true;
    }
    printf("%d\n",ans);
    return 0;
}
