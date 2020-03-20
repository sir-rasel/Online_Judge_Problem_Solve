#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        pair<int,int> arr[n+5];
        for(int i=0;i<n;i++) {
            scanf("%d",&arr[i].first);
            arr[i].second = i;
        }
        sort(arr,arr+n);
        bool flag = false;
        for(int i=0;i<n-1 and !flag;i++){
            for(int j=i+1;j<n and !flag;j++){
                if(arr[i].first==arr[j].first)
                    if(arr[j].second-arr[i].second>1) flag=true;
                else {
                    i=j-1;
                    break;
                }
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
