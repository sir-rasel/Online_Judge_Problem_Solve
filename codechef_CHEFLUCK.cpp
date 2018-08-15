#include<cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        bool ok = false;
        int nf = n/7;
        for(int f=nf;f>=0;f--){
            int rem = n-(f*7);
            if(rem%4==0){
                printf("%d\n",f*7);
                ok = true;
                break;
            }
        }
        if(!ok) printf("-1\n");
    }
    return 0;
}
