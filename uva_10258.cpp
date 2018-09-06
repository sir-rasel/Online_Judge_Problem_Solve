#include<bits/stdc++.h>
using namespace std;

class teamStatus{
public:
    int id;
    int problem[11];
    int panalty[11];
    int totalPenalty;
    int solvedProblem;
    teamStatus(){
        for(int i=0;i<11;i++) problem[i]=0;
        for(int i=0;i<11;i++) panalty[i]=0;
        id = 150;
        totalPenalty = 0;
        solvedProblem = 0;
    }
};

bool compare(const teamStatus &a,const teamStatus &b){
    if(a.solvedProblem==b.solvedProblem){
        if(a.totalPenalty==b.totalPenalty){
            return a.id<b.id;
        }
        return a.totalPenalty<b.totalPenalty;
    }
    return a.solvedProblem>b.solvedProblem;

}

int main(){
    int test;
    scanf("%d\n",&test);
    while(test--){

        teamStatus ob[105];
        map<int,int>m;

        char cont[300];
        char status;
        int team,prob,time;

        while(gets(cont) and cont[0]!='\0'){
            sscanf(cont,"%d %d %d %c",&team,&prob,&time,&status);
            ob[team].id=team;
            if(m[team]==0){
                if(status=='C'){
                    ob[team].totalPenalty+=time;
                    ob[team].problem[prob]=1;
                    ob[team].solvedProblem++;
                }
                else if(status=='I'){
                    ob[team].panalty[prob]++;
                }
                m[team]++;
            }
            else {
                if(status=='C'){
                    if(ob[team].problem[prob]==0){
                        ob[team].totalPenalty+=time+(ob[team].panalty[prob]*20);
                        ob[team].solvedProblem++;
                        ob[team].problem[prob]=1;
                    }
                }
                else if(status=='I'){
                    ob[team].panalty[prob]++;
                }
            }
        }

        sort(ob,ob+101,compare);

        for(int i=0;i<101;i++){
            if(m.find(ob[i].id)!=m.end())
                printf("%d %d %d\n",ob[i].id,ob[i].solvedProblem,ob[i].totalPenalty);
        }

        if(test) printf("\n");
    }
    return 0;
}
