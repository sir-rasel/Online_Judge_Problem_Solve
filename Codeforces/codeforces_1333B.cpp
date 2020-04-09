#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        map<int,int>m;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(m.count(a[i])==0) m[a[i]]=i;
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        bool flag = true;
        for(int i=n-1;i>=0;i--){
            if(a[i]==b[i]) continue;
            if(b[i]==0){
                if(a[i]<0) {
                    if(m.count(1)==0 or m[1]>=i) {
                        flag=false;
                        break;
                    }
                }
                else {
                    if(m.count(-1)==0 or m[-1]>=i) {
                        flag=false;
                        break;
                    }
                }
            }
            else if(b[i]>0){
                if(m.count(1)==0 or m[1]>=i) {
                    flag=false;
                    break;
                }
            }
            else if(b[i]<0){
                if(m.count(-1)==0 or m[-1]>=i) {
                    flag=false;
                    break;
                }
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
