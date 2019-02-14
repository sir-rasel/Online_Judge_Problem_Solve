#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i=1;i<=testcase;i++){
        int player,initialplayer,pass;
        cin>>player>>initialplayer>>pass;
        int temp=(pass%player);
        if(temp==0) printf("Case %d: %d\n",i,initialplayer);
        else{
            int res=( (initialplayer+player) - (player-temp) ) % player;
            if(res==0) res=player;
            printf("Case %d: %d\n",i,res);
        }
    }
    return 0;
}
