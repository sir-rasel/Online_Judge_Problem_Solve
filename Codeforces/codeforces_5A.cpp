#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,bool>query;
    string s;
    char c;
    int ans=0;
    while(cin>>c,getline(cin,s)){
        if(c=='+'){
            if(!query.count(s))
                query[s]=true;
        }
        else if(c=='-') query.erase(s);
        else{
            int len = s.length();
            int i=0;
            for(i;i<len;i++){
                if(s[i]==':')
                    break;
            }
            ans+=((len-i-1)*(query.size()));
        }
    }
    printf("%d\n",ans);
    return 0;
}
