#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int mod = 1e9+7;

bool check(string a,string b){
    for(int i=0,j=1;i<a.size();i++,j++){
        if(a[i]!=b[j]) return false;
    }
    return true;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++) cin>>s[i];

        string temp="";
        for(int i=0;i<n;i++)
            if(s[i].size()>temp.size())
                temp = s[i];

        bool flag = true;
        for(int i=0;i<n;i++){
            string t = temp.substr(temp.size()-s[i].size()+1,s[i].size());
            if(check(t,s[i])==false){
                flag = false;
                break;
            }
        }
        printf("Case #%d: ",cs++);
        if(flag)
            for(int i=1;i<temp.size();i++){
                if(i+1==temp.size()) printf("%c\n",temp[i]);
                else printf("%c",temp[i]);
            }
        else printf("*\n");
    }
    return 0;
}
