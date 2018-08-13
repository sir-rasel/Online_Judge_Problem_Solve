#include <iostream>
#include <cstdio>
#include <queue>
#include <map>
using namespace std;

int main(){
    int t,cs=1;
    while(scanf("%d",&t) and t){

        queue<int>team[1001];
        queue<int>serial;
        map<int,int>whichTeam;

        for(int i=1;i<=t;i++){
            int member;
            scanf("%d",&member);
            for(int j=0;j<member;j++){
                int id;
                scanf("%d",&id);
                whichTeam[id]= i;
            }
        }

        printf("Scenario #%d\n",cs++);
        string command;
        while(cin>>command and command!="STOP"){
            if(command == "ENQUEUE"){
                int id;
                scanf("%d",&id);
                int now = whichTeam[id];
                if(team[now].empty()) serial.push(now);
                team[now].push(id);
            }
            else{
                int now = serial.front();
                printf("%d\n",team[now].front());
                team[now].pop();
                if(team[now].empty()) serial.pop();
            }
        }
        printf("\n");
    }
    return 0;
}
