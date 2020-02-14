#include<cstdio>
#include <cstring>
#include<stack>
using namespace std;

int operation(char op,int a,int b){
    if(op=='+') return a+b;
    else if(op=='-') return a-b;
    else return a*b;
}

int calculateResult(int n){
    stack <int> result;

    for(int i=0;i<n;i++){
        char c;
        scanf("%c",&c);
        if(c!=' '){
            if(c>='0' && c<='9') result.push(c-'0');
            else{
                int second = result.top();
                result.pop();
                int first = result.top();
                result.pop();
                result.push(operation(c,first,second));
            }
        }
        else i--;
    }
    return result.top();
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    scanf("%d",&n);
    getchar();
    printf("%d\n",calculateResult(n));
    return 0;
}
