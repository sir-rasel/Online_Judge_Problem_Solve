#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

bool vowel(char c){
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
        return true;
    return false;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;

        bool flag = false;
        for(auto c:s){
            if(vowel(c)){
                flag = true;
                break;
            }
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
