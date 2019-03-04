#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int posN=0,negN=0;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            if(num<0)
                negN++;
            else
                posN++;
        }
        if(posN==0 or negN==0) printf("%d %d\n",max(posN,negN),max(posN,negN));
        else printf("%d %d\n",max(posN,negN),min(posN,negN));
    }
    return 0;
}
