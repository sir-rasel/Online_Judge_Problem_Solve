#include<bits/stdc++.h>
using namespace std;

const double eps = 1e-8;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        string s;
        cin>>n>>s;

        double ans=0;

        for(int i=0;i<n;i++){
            double p;
            scanf("%lf",&p);
            p/=100.0;
            if(p>=eps) {
                if(s=="bit") ans+=(-1.0*p*log2(p));
                else if(s=="nat") ans+=(-1.0*p*log(p));
                else ans+=(-1.0*p*log10(p));
            }
        }
        printf("%.10f\n",ans);
    }
    return 0;
}
