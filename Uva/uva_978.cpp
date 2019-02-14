#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int round,sg,sb;
        scanf("%d %d %d",&round,&sg,&sb);
        priority_queue<int>green,blue;
        for(int i=0;i<sg;i++){
            int power;
            scanf("%d",&power);
            green.push(power);
        }
        for(int i=0;i<sb;i++){
            int power;
            scanf("%d",&power);
            blue.push(power);
        }

        while(!green.empty() and !blue.empty()){
            vector<int>greenRemainder,blueRemainder;
            for(int i=0;i<round;i++){
                if(green.empty() or blue.empty()) break;
                int gtop = green.top();
                green.pop();
                int btop = blue.top();
                blue.pop();
                if(gtop>btop) greenRemainder.push_back(gtop-btop);
                else if(btop>gtop) blueRemainder.push_back(btop-gtop);
            }
            for(auto it=greenRemainder.begin();it!=greenRemainder.end();it++)
                green.push(*it);
            for(auto it=blueRemainder.begin();it!=blueRemainder.end();it++)
                blue.push(*it);
        }

        if(green.empty() and blue.empty()){
            printf("green and blue died\n");
        }
        else if(blue.empty()){
            printf("green wins\n");
            while(!green.empty()){
                printf("%d\n",green.top());
                green.pop();
            }
        }
        else if(green.empty()){
            printf("blue wins\n");
            while(!blue.empty()){
                printf("%d\n",blue.top());
                blue.pop();
            }
        }

        if(test) printf("\n");
    }
    return 0;
}
