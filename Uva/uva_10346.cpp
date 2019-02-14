#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int cigarates,butts;
    while(cin>>cigarates>>butts and cigarates!=-1){
        int totalcigarates=cigarates;
        while(cigarates>=butts){
            totalcigarates+=(cigarates/butts);
            cigarates=(cigarates/butts)+(cigarates%butts);
        }
        cout<<totalcigarates<<endl;
    }
    return 0;
}
