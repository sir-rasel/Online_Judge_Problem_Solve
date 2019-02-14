#include <cstdio>

int main(){
    int n,m,counter;
    while(scanf("%d %d",&n,&m) and (n!=0 and m!=0)){
        int jack[n+1];
        int jill[m+1];
        counter=0;
        for(int i=0;i<n;i++) scanf("%lld",&jack[i]);
        for(int i=0;i<m;i++) scanf("%lld",&jill[i]);
        int i=0,j=0;
        while(i<n && j<m){
            if(jack[i]==jill[j]){
                counter++;
                i++;
                j++;
            }
            else if(jack[i]>jill[j]) j++;
            else if(jack[i]<jill[j]) i++;
        }
        printf("%d\n",counter);
    }
    return 0;
}
