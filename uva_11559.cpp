#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int participant,budget,hotel,weekend;
    while(scanf("%d %d %d %d",&participant,&budget,&hotel,&weekend) !=EOF){
        int minimumcost=100000000;
        while(hotel--){
            int cost,bed;
            cin>>cost;
            for(int i=0;i<weekend;i++){
                cin>>bed;
                if(bed>=participant){
                    int temp=cost*participant;
                    if(temp<minimumcost and temp<=budget){
                        minimumcost=temp;
                    }
                }
            }
        }
        if(minimumcost!=100000000) cout<<minimumcost<<endl;
        else cout<<"stay home"<<endl;
    }
    return 0;
}
