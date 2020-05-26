#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>a(n);
    for(auto &it:a) scanf("%d",&it);

    int ans = 0,count = 0;
    map<int,int>check;
    for(int i=0,j=0;j<n;j++){
        if(check[a[j]]+1<=1){
            count++;
            check[a[j]]++;
        }
        else{
            while(check[a[j]]!=0){
                check[a[i++]]--;
                count--;
            }
            check[a[j]]++;
            count++;
        }
        ans = max(ans,count);
    }
    ans = max(ans,count);
    printf("%d\n",ans);
    return 0;
}
