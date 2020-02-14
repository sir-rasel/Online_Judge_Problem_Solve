#include<cstdio>
#include <cstring>
#include<stack>
using namespace std;

bool isOk(char str[]){
    stack <char> s;
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(s.empty() && (str[i]==')' || str[i]==']')) return false;
        else if(s.empty()) s.push(str[i]);
        else{
            if(str[i]=='(' || str[i]=='[') s.push(str[i]);
            else if(str[i]==')' && s.top()!='(') return false;
            else if(str[i]==']' && s.top()!='[') return false;
            else s.pop();
        }
    }
    return s.empty();
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    scanf("%d",&n);
    getchar();
    char str[10005];
    for(int i=0;i<n;i++){
        scanf("%s",str);
        if(isOk(str)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
