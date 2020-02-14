#include<cstdio>
#include<algorithm>
#include<utility>
using namespace std;

struct Medicine{
    int a,b;
};

bool cmp(Medicine f,Medicine s){
    if(f.a>s.a) return true;
    else if(f.a==s.a){
        if(f.b<s.b) return true;
        return false;
    }
    return false;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,w;
    Medicine medicine[100005];

    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d %d",&medicine[i].a,&medicine[i].b);
    scanf("%d",&w);

    sort(medicine,medicine+n,cmp);
    int ans=0;
    for(int i=0;i<n && w>0;i++){
        if(medicine[i].b<=w) {
            ans+=(medicine[i].a*medicine[i].b);
            w-=medicine[i].b;
        }
        else{
            ans+=(medicine[i].a*w);
            w=0;
        }
    }
    printf("%d\n",ans);
    return 0;
}
