#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c,m;
    scanf("%d %d %d",&n,&c,&m);
    int flag=0;
    while(n--){
        int d,t,mm;
        scanf("%d %d %d",&d,&t,&mm);
        if(t>c and flag==0) flag=2;
        else if(mm>m and flag==0) flag=3;
        else if(d!=0 and flag==0) flag=1;
    }
    if(flag==0) printf("AC\n");
    else if(flag==1) printf("WA\n");
    else if(flag==2) printf("CLE\n");
    else if(flag==3) printf("MLE\n");
    return 0;
}
