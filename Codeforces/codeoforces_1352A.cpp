#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        vector<int>ans;
        int i=1;
        while(n){
            int temp = (n%10);
            if(temp) ans.push_back(temp*i);
            i*=10;
            n/=10;
        }

        printf("%d\n",ans.size());
        for(int i=0;i<ans.size();i++){
            if(i+1==ans.size()) printf("%d\n",ans[i]);
            else printf("%d ",ans[i]);
        }
    }
    return 0;
}
