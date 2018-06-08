#include <bits/stdc++.h>
using namespace std;

int main(){
    int numberOfRoom;
    int presentMember,totalCapacity;
    int availableroom=0;
    cin>>numberOfRoom;
    while(numberOfRoom--){
        cin>>presentMember>>totalCapacity;
        if(totalCapacity-presentMember>=2) availableroom++;
    }
    cout<<availableroom<<endl;
    return 0;
}
