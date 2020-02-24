#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        string s;
        cin>>n>>m>>s;
        int arr[m+5];
        for(int i=0;i<m;i++) cin>>arr[i];
        arr[m]=n;

        vector<int>pos[30];
        for(int i=0;i<n;i++){
            pos[s[i]-'a'].push_back(i+1);
        }

        vector<int>ans(30,0);
        for(int i=0;i<=m;i++){
            for(int j=0;j<26;j++){
                if(!pos[j].empty()) {
                    auto rep = lower_bound(pos[j].begin(),pos[j].end(),arr[i]);
                    if(rep!=pos[j].end()){
                        int cnt = rep-pos[j].begin();
                        if(pos[j][cnt]<=arr[i]) ans[j]+=(cnt+1);
                        else{
                            ans[j]+=cnt;
                        }
                    }
                    else {
                        int cnt = pos[j].size()-1;
                        if(pos[j][cnt]<=arr[i]) ans[j]+=(cnt+1);
                    }
                }
            }
        }
        for(int i=0;i<26;i++){
            if(i==25) printf("%d\n",ans[i]);
            else printf("%d ",ans[i]);
        }
    }
    return 0;
}
