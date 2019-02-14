#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int l,m;
        scanf("%d%d",&l,&m);
        l*=100;
        queue<int>left;
        queue<int>right;
        for(int i=0;i<m;i++){
            int len;
            string dir;
            cin>>len>>dir;
            if(dir=="left") left.push(len);
            else right.push(len);
        }
        int repetation = 0,flag=1;
        while(!left.empty() or !right.empty()){
            repetation++;
            int temp = 0;
            if(flag){
                if(!left.empty()){
                    while(1){
                        if(!left.empty() and temp+left.front()<=l){
                            temp+=left.front();
                            left.pop();
                        }
                        else break;
                    }
                }
            }
            else{
                if(!right.empty()){
                    while(1){
                        if(!right.empty() and temp+right.front()<=l){
                            temp+=right.front();
                            right.pop();
                        }
                        else break;
                    }
                }
            }
            flag = 1-flag;
        }
        printf("%d\n",repetation);
    }
    return 0;
}
