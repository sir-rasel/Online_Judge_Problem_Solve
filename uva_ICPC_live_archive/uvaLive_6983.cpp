#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>arr(n);
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        sort(arr.begin(),arr.end());
        bool flag=true;
        for(int i=0;i<n-1 and flag;i++)
            if(arr[i]==arr[i+1]) flag=false;
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
