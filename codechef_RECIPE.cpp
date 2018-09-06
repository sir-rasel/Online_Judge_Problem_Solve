#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        vector<int>rec;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            rec.push_back(num);
        }
        int res = rec[0];
        for(int i=1;i<n;i++){
            res = __gcd(res,rec[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d ",rec[i]/res);
        }
        printf("\n");
    }
    return 0;
}
