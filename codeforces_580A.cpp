#include <bits/stdc++.h>
using namespace std;

int main(){
    int numberofelement;
    cin>>numberofelement;
    int maximum=0,temp=1,seq=0;
    while(numberofelement--){
        int number;
        cin>>number;
        if(number>=temp){
            seq++;
        }
        else{
            if(seq>maximum) maximum=seq;
            seq=1;
        }
        temp=number;
    }
    if(seq>maximum) maximum=seq;
    cout<<maximum<<endl;
    return 0;
}
