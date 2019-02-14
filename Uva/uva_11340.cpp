#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        map<char,int>value;
        while(n--){
            char ch;
            int val;
            scanf("\n%c %d",&ch,&val);
            value[ch]=val;
        }
        int m;
        scanf("%d",&m);
        char line;
        int amount = 0;
        getchar();
        while(m--){
            while(scanf("%c",&line)) {
                if(line=='\n') break;
                amount+=value[line];
            }
        }
        double res = amount/100.0;
        printf("%.2f$\n",res);
    }
    return 0;
}
