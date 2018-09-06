#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d\n\n",&test);
    while(test--){
        map<string,int>m;
        int n=0;
        string s;
        while(getline(cin,s)){
            if(s.length()==0) break;
            m[s]++;
            n++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            cout<<it->first;
            double per = (100.0/n)*it->second;
            printf(" %.4f\n",per);
        }
        if(test) printf("\n");
    }
    return 0;
}

