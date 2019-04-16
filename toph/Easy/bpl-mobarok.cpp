#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
        string s;
        int ball=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
            if( (s[i]>='0' and s[i]<='6') or s[i]=='O') ball++;

        if(ball%6==0) {
            int o=ball/6;
            if(o==1) printf("%d OVER\n",ball/6);
            else printf("%d OVERS\n",ball/6);
        }
        else {
            int o=ball/6;
            int b=ball%6;
            if(o==0){
                if(b==1) printf("%d BALL\n",b);
                else printf("%d BALLS\n",b);
            }
            else {
                if(o==1){
                    if(b==1) printf("%d OVER %d BALL\n",o,b);
                    else printf("%d OVER %d BALLS\n",o,b);
                }
                else{
                    if(b==1) printf("%d OVERS %d BALL\n",o,b);
                    else printf("%d OVERS %d BALLS\n",o,b);
                }
            }
        }
    }
    return 0;
}
