#include<bits/stdc++.h>
using namespace std;

bool check(int x1,int y1,int x2,int y2,int x3,int y3){
    if((x1-x2)*(y3-y2)==(y1-y2)*(x3-x2)) return true;
    else return false;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int x1,x2,x3,y1,y2,y3;
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        printf("Case #%d: ",cs++);
        if(x3>=0 and y3>=0 and check(x1,y1,x2,y2,x3,y3)) printf("Bravo! Adnan vai!\n");
        else printf("Poor Adnan vai! God bless you!\n");
    }
    return 0;
}
