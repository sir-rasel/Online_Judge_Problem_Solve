#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void balance(string s){
    int l = 0, r = s.size()-1;
    vector<int> ans;
    while (l < r){
        if (s[l] == ')') l++;
        else if (s[r] == '(') r--;
        else{
            ans.push_back(l++);
            ans.push_back(r--);
        }
    }
    if (!ans.empty()){
        printf("%d\n%d\n",1,ans.size());
        sort(ans.begin(), ans.end());
        for (int i : ans) printf("%d ",i+1);
        cout << endl;
    }
    else printf("0\n");
}

int main(){
    string s;
    cin>>s;
    balance(s);
    return 0;
}
