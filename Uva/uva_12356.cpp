#include<cstdio>
#include<map>
using namespace std;

int main() {
    int n,b;
    while(scanf("%d %d",&n,&b) and n or b){
        map<int,int>left,right;
        for(int i=1;i<=n;i++){
            left[i] = i-1;
            right[i] = i+1;
        }
        while(b--){
            int l,r;
            scanf("%d %d",&l,&r);

            if(left[l]>=1) printf("%d ",left[l]);
            else printf("* ");
            if(right[r]<=n) printf("%d\n",right[r]);
            else printf("*\n");

            left[right[r]] = left[l];
            right[left[l]] = right[r];
        }
        printf("-\n");
    }
    return 0;
}
