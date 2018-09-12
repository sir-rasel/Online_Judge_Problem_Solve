#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        long long p,l,i;
        scanf("%lld %lld",&p,&l);
        p-=l;

        vector<long long>small;
        vector<long long>large;
        for(i=1;i*i<p;i++){
            if(p%i==0){
                if(i>l) small.push_back(i);
                if((p/i)>l) large.push_back(p/i);
            }
        }
        if(i*i==p and i>l) small.push_back(i);

        printf("Case %d: ",cs++);
        for(int i=0;i<small.size();i++){
            printf("%lld",small[i]);
            if(!(i==small.size()-1 and large.size()==0)) printf(" ");
        }
        for(int i=large.size()-1;i>=0;i--){
            printf("%lld",large[i]);
            if(i!=0) printf(" ");
        }
        if(small.size()+large.size()) printf("\n");
        else printf("impossible\n");
    }
    return 0;
}
