#include <bits/stdc++.h>
#define limit 100005
using namespace std;
//
bool currentActivate[limit];
int parent[limit],conflict[limit];

void primeDivisorCalculate(){
    for(int i=2;i<limit;i++)
        if(!parent[i])
            for(int j=i;j<limit;j+=i)
                parent[j]=i;
}
//
void activated(int n){
    if(currentActivate[n]){
        printf("Already on\n");
        return;
    }
    for(int i=n; i>1; i/=parent[i])
        if(conflict[parent[i]]!=0) {
            printf("Conflict with %d\n",conflict[parent[i]]);
            return;
        }
    currentActivate[n]=true;
    for(int i=n; i>1; i/=parent[i]) conflict[parent[i]]=n;
    printf("Success\n");
}


void deactivated(int n){
    if(!currentActivate[n]){
        printf("Already off\n");
        return;
    }
    currentActivate[n]=false;
    for(int i=n; i>1; i/=parent[i]) conflict[parent[i]]=0;
    printf("Success\n");
}

int main(){
    primeDivisorCalculate();
    int n,m;;
    scanf("%d %d",&n,&m);
    while(m--){
        char c;
        int num;
        scanf(" %c%d",&c,&num);
        if(c=='+') activated(num);
        else deactivated(num);
    }
    return 0;
}
