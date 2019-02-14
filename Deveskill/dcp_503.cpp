#define ONLINE_JUDGE 1
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,j;
        scanf("%d %d",&n,&j);
        vector<int>a,b;
        for(int i=1;i<=n;i++){
            int num;
            scanf("%d",&num);
            if(num>j) a.push_back(i);
            else b.push_back(i);
        }
        printf("Kache Eso\n");
        for(int i=0;i<a.size();i++){
            printf("%d",a[i]);
            if(i!=a.size()-1) printf(" ");
        }
        printf("\n");
        printf("Dure Giya Mor\n");
        for(int i=0;i<b.size();i++){
            printf("%d",b[i]);
            if(i!=b.size()-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
