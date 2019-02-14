#include <bits/stdc++.h>
using namespace std;

int main(){
    int numberOfRound;
    cin>>numberOfRound;
    int maxLead=0,leader,player1total=0,player2total=0;
    while(numberOfRound--){
        int player1,player2;
        cin>>player1>>player2;
        player1total+=player1;
        player2total+=player2;
        if(player1total>player2total){
            if( (player1total-player2total) > maxLead){
                maxLead=player1total-player2total;
                leader=1;
            }
        }
        else{
            if( (player2total-player1total) > maxLead){
                maxLead=player2total-player1total;
                leader=2;
            }
        }
    }
    cout<<leader<< " " <<maxLead<<endl;
    return 0;
}
