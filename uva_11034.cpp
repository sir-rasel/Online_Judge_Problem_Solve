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
        bool flag = false,flag1=false;
        for(int i=0;i<m;i++){
            int len;
            string dir;
            cin>>len>>dir;
            if(flag1==false and dir=="left") flag=true;
            if(dir=="left") left.push(len);
            else right.push(len);
            flag1 = true;
        }
        int repetation = 0;
        while(!left.empty() or !right.empty()){
            int temp = 0;
            if(!left.empty()){
                while(1){
                    if(!left.empty() and temp+left.front()<=l){
                        temp+=left.front();
                        left.pop();
                    }
                    else break;
                }
            }
            repetation++;
            temp=0;
            if(!right.empty()){
                while(1){
                    if(!right.empty() and temp+right.front()<=l){
                        temp+=right.front();
                        right.pop();
                    }
                    else break;
                }
            }
            repetation++;
        }
        if(flag) printf("%d\n",repetation);
        else printf("%d\n",repetation-1);
    }
    return 0;
}
