#include <bits/stdc++.h>
using namespace std;

int main(){
    int rowNumber,columnNumber;
    int NumberOfMove;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int number;
            cin>>number;
            if(number==1){
                rowNumber=i;
                columnNumber=j;
            }
        }
    }
    NumberOfMove=abs(2-rowNumber);
    NumberOfMove+=abs(2-columnNumber);
    cout<<NumberOfMove<<endl;
    return 0;
}
