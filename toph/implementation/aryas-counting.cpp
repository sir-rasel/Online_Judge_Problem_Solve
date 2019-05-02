#include<bits/stdc++.h>
using namespace std;

char problem[]={'A','B','C'};

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int maxx=-1,prob,num;
        bool flag=false;
        for(int i=0;i<3;i++){
            scanf("%d",&num);
            if(num==maxx) flag=true;
            if(i==2 and num>maxx) flag=false,prob=i;
            else if(num>maxx) maxx=num,prob=i;
        }
        if(!flag) printf("Case %d: %c\n",cs++,problem[prob]);
        else printf("Case %d: Confused\n",cs++);
    }
    return 0;
}
