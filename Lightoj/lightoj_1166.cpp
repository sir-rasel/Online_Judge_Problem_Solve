#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>per(n);
        for(int i=0;i<n;i++) scanf("%d",&per[i]);
        int res=0;
        for(int i=0;i<n;i++){
            if(per[i]!=i+1){
                for(int j=i+1;j<n;j++){
                    if(per[j]==i+1){
                        res++;
                        swap(per[i],per[j]);
                        break;
                    }
                }
            }
        }
        printf("Case %d: %d\n",cs++,res);
    }
    return 0;
}
