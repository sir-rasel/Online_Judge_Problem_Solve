#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int seat;
        cin>>seat;
        int row = ceil(seat/6.0);
        if(row%2==1){
            int temp=seat%6;
            if(temp==1) cout<<seat+11<<" WS"<<endl;
            else if(temp==0) cout<<seat+1<<" WS"<<endl;
            else if(temp==2) cout<<seat+9<<" MS"<<endl;
            else if(temp==5) cout<<seat+3<<" MS"<<endl;
            else if(temp==3) cout<<seat+7<<" AS"<<endl;
            else if(temp==4) cout<<seat+5<<" AS"<<endl;

        }
        else{
            int temp=seat%6;
            if(temp==1) cout<<seat-1<<" WS"<<endl;
            else if(temp==0) cout<<seat-11<<" WS"<<endl;
            else if(temp==2) cout<<seat-3<<" MS"<<endl;
            else if(temp==5) cout<<seat-9<<" MS"<<endl;
            else if(temp==3) cout<<seat-5<<" AS"<<endl;
            else if(temp==4) cout<<seat-7<<" AS"<<endl;
        }
    }
    return 0;
}
