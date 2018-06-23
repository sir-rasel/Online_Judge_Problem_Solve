#include <iostream>
using namespace std;

int main(){
    int numberoffriends;
    int giftsequence[101];
    cin>>numberoffriends;
    for(int i=0;i<numberoffriends;i++){
        int gift;
        cin>>gift;
        giftsequence[gift-1]=i+1;
    }
    for(int i=0;i<numberoffriends;i++){
        cout<<giftsequence[i]<< " ";
    }
    cout<<endl;
    return 0;
}
