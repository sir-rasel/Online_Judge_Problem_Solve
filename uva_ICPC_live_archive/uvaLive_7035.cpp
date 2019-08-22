#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        bool flag=true;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            if(num%3!=0) flag=false;
        }
        printf("Case #%d: ",cs++);
        if(flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
