#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int maxx = 1e6+5;


int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        string s;
        cin>>s;

        int neg = 0;
        stack<char>st;
        for(int i=0;i<(int)s.size();i++){
            if(s[i]=='(') st.push(s[i]);
            else{
                if(st.empty()) neg++;
                else if(st.top()!='(') neg++;
                else st.pop();
            }
        }

        printf("%d\n",max(neg,(int)st.size()));
    }

    return 0;
}
