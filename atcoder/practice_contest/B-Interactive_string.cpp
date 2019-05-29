#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,Q,i,j;
    scanf("%d%d", &N, &Q);
    string s;
    for(i=0; i<N; i++) s += (char)('A' + i);
    int temp=0;
    bool flag=true;
    for(i=0; i<N and flag; i++)
        for(j=0; j<N-1; j++){
            printf("? %c %c\n", s[j], s[j+1]);
            fflush(stdout);
            char ans;
            scanf(" %c", &ans);
            if(ans == '>') swap(s[j], s[j+1]);
            temp++;
            if(temp==Q){
                flag=false;
                break;
            }
        }
    printf("! %s\n", s.c_str());
    fflush(stdout);
    return 0;
}
