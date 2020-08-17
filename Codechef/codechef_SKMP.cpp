#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    cin>>test;
    while(test--){
        string s,p;
        cin>>s>>p;

        vector<int> str(30,0),pattern(30,0);
        for(int i=0;i<s.size();i++) str[s[i]-'a']++;
        for(int i=0;i<p.size();i++) pattern[p[i]-'a']++;

        string ans1 = "";
        bool flag = true;
        for(int i=0;i<26;i++){
            if((i+'a')==p[0] and flag){
                for(auto c:p)
                    ans1 += c;

                for(int j=0;j<(str[i]-pattern[i]);j++)
                    ans1 += (i+'a');

                flag = false;
            }
            else{
                for(int j=0;j<(str[i]-pattern[i]);j++)
                    ans1 += (i+'a');
            }
        }
        string ans2 = "";
        flag = true;
        for(int i=0;i<26;i++){
            if((i+'a')==p[0] and flag){
                for(int j=0;j<(str[i]-pattern[i]);j++)
                    ans2 += (i+'a');

                for(auto c:p)
                    ans2 += c;

                flag = false;
            }
            else{
                for(int j=0;j<(str[i]-pattern[i]);j++)
                    ans2 += (i+'a');
            }
        }

        cout<<min(ans1,ans2)<<endl;
    }

    return 0;
}
