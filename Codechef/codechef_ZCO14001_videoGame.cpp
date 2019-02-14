#include <bits/stdc++.h>
using namespace std;

int main(){
    int width,height;
    cin>>width>>height;
    int container[width+3];
    int position=1;
    bool crain=false;
    for(int i=1;i<=width;i++) cin>>container[i];
    while(1){
        int command;
        cin>>command;
        if(command==0) break;
        else if(command==1){
            if(position==1) continue;
            else position--;
        }
        else if(command==2){
            if(position==width) continue;
            else position++;
        }
        else if(command==3){
            if(crain==false){
                if(container[position]==0) continue;
                else {
                    container[position]--;
                    crain=true;
                }
            }
        }
        else if(command==4){
            if(crain==true){
                if(container[position]==height) continue;
                else{
                    container[position]++;
                    crain=false;
                }
            }
        }
    }
    for(int i=1;i<=width;i++) {
        if(i!=width) cout<<container[i]<< " ";
        else cout<<container[i]<<endl;
    }
    return 0;
}
