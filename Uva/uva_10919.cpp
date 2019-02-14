#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    while(scanf("%d",&k) and k!=0){
        int m;
        scanf("%d",&m);
        map<int,int>course;
        for(int i=0;i<k;i++) {
            int n;
            scanf("%d",&n);
            course[n]++;
        }
        bool flag=true;
        int sum=0;
        for(int i=0;i<m;i++){
            int c,r;
            scanf("%d %d",&c,&r);
            int counter=0;
            for(int j=0;j<c;j++){
                int n;
                scanf("%d",&n);
                if(course[n]) counter++;
            }
            if(counter<r) flag=false;
            sum+=r;
        }
        if(flag and sum>=k) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
