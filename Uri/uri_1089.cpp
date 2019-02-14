#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) and n!=0){
        bool downFlag=true,upFlag=true,firstCheck,lastCheck;
        int first;
        scanf("%d",&first);
        int peak=0;
        for(int i=0;i<n-1;i++){
            int second;
            scanf("%d",&second);
            if(downFlag==true and second>first){
                downFlag=false;
                upFlag=true;
                peak++;
                if(i==0) firstCheck=true;
                lastCheck=true;
            }
            else if(upFlag==true and second<=first){
                downFlag=true;
                upFlag=false;
                peak++;
                if(i==0) firstCheck=false;
                lastCheck=false;
            }
            first=second;
        }
        if(lastCheck==firstCheck) peak++;
        printf("%d\n",peak);
    }
    return 0;
}
