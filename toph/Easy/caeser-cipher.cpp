#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    scanf("%d",&n);
    getchar();
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            int temp = s[i]-'a'-n;
            if(temp<0) temp+=26;
            s[i]=temp+'a';
        }
    }
    cout<<s<<endl;
    return 0;
}
