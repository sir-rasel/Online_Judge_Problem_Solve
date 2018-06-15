#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int dragon,knight;
    while(cin>>dragon>>knight and dragon!=0 and knight!=0){
        vector<int>dragonhead,knightheight;
        for(int i=0;i<dragon;i++) {
            int num;
            cin>>num;
            dragonhead.push_back(num);
        }
        for(int i=0;i<knight;i++) {
            int num;
            cin>>num;
            knightheight.push_back(num);
        }
        sort(dragonhead.begin(),dragonhead.end());
        sort(knightheight.begin(),knightheight.end());
        if(knight<dragon){
            cout<<"Loowater is doomed!"<<endl;
        }
        else{
            int cost=0;
            int i=0,j=0;
            while(i<dragonhead.size() and j<knightheight.size()){
                if(dragonhead[i]<=knightheight[j]){
                    cost+=knightheight[j];
                    i++;
                    j++;
                }
                else j++;
            }
            if(i!=dragon) cout<<"Loowater is doomed!"<<endl;
            else cout<<cost<<endl;
        }
    }
    return 0;
}
