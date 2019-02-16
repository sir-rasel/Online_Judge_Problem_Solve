#include <bits/stdc++.h>
using namespace std;


int main(){
    int test;
    cin >> test;
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        int arr[n+5];
        map<int,int>number;
        set<int>uni;
        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
            number[arr[i]]++;
            if(arr[i]) uni.insert(arr[i]);
        }
        for(int i=0;i<m;i++){
            int q;
            scanf("%d",&q);
            if(q==2) printf("%d\n",uni.size());
            else if(q==1){
                int x,y;
                scanf("%d %d",&x,&y);
                if(arr[x] and (number[arr[x]]-1)==0 ) uni.erase(arr[x]);
                number[arr[x]]--;
                arr[x]=y;
                number[arr[x]]++;
                if(arr[x]) uni.insert(arr[x]);
            }
        }
    }
    return 0;
}
