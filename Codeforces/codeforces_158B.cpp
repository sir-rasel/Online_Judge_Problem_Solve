#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>GroupOfMember;
    int groupNumber;
    int memberNumber;
    cin>>groupNumber;
    for(int start=0;start<groupNumber;start++){
        cin>>memberNumber;
        GroupOfMember[memberNumber]++;
    }
    int NumberOfcar=GroupOfMember[4];
    NumberOfcar+=GroupOfMember[3];
    GroupOfMember[1]-=GroupOfMember[3];
    if(GroupOfMember[1]<0) GroupOfMember[1]=0;
    int temp=(GroupOfMember[1]*1)+(GroupOfMember[2]*2);
    NumberOfcar+=ceil(temp/4.0);
    cout<<NumberOfcar<<endl;
    return 0;
}
