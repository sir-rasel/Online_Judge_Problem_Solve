#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
    string s;
    cin>>s;
    deque<char>ans1,ans2;
    for(int i=0;i<s.size();i++) ans1.push_back(s[i]);
    for(int i=s.size()-1;i>=0;i--) ans2.push_back(s[i]);
    int q;
    cin>>q;
    while(q--){
        int ti;
        cin>>ti;
        if(ti==1){
            swap(ans1,ans2);
        }
        else{
            int fi;
            char c;
            cin>>fi>>c;
            if(fi==1){
                ans1.push_front(c);
                ans2.push_back(c);
            }
            else{
                ans1.push_back(c);
                ans2.push_front(c);
            }
        }
    }
    for(auto it:ans1) cout<<it;
    cout<<endl;
    return 0;
}
