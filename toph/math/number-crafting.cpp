#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        map<int,vector<int> >m;
        int minn=INT_MAX;
        long long sum=0;
        for(int i=1;i<=n;i++){
            int num;
            scanf("%d",&num);
            minn=min(minn,num);
            sum+=num;
            m[num].push_back(i);
        }
        int res = sum/minn;
        if(m.count(res)==0) printf("NULL\n");
        else {
            for(vector<int>::iterator it=m[res].begin();it!=m[res].end();it++) {
                if(it==m[res].end()-1) printf("%d",*it);
                else printf("%d ",*it);
            }
            printf("\n");
        }
    }
    return 0;
}
