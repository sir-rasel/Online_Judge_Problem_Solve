#include <cstdio>
#include <map>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    scanf("%d",&n);
    long long int sum=0;
    map<int,int> st,pos;
    st[0]=0;
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(b==0){
            st[i]=st[pos[a]];
            pos[i]=pos[pos[a]];
        }
        else{
            st[i]=st[a]+b;
            pos[i]=a;
        }
        sum+=st[i];
    }
    printf("%lld\n",sum);
    return 0;
}
