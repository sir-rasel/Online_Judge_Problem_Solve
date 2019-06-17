#include<bits/stdc++.h>
using namespace std;

const int N = 30;

int tc[N];
bool t[N],cp[N];
int n,TC,ans;

void BackTrack(int label){
    if(label==n){
        int tmp=0;
        for(int i=0;i<n;i++) if(t[i]) tmp+=tc[i];
        if(tmp<=TC) {
            if(ans<tmp){
                ans = max(ans,tmp);
                for(int i=0;i<n;i++) cp[i]=t[i];
            }
        }
        return;
    }
    t[label] = true;
    BackTrack(label+1);
    t[label] = false;
    BackTrack(label+1);
}

int main(){
    while(scanf("%d %d",&TC,&n)==2){
        for(int i=0;i<n;i++) scanf("%d",&tc[i]);
        ans=0;
        for(int i=0;i<n;i++) cp[i]=false;
        BackTrack(0);
        for(int i=0;i<n;i++) if(cp[i]) printf("%d ",tc[i]);
        printf("sum:%d\n",ans);
    }
	return 0;
}
