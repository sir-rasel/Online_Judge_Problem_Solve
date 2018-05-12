#include <cstdio>
#include <iostream>
#include <deque>
using namespace std;

int main(){
    int test;
    string command;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int n,m,value,counter=0;
        scanf("%d %d",&n,&m);
        printf("Case %d:\n",i);
        deque<int>D;
        for(int j=0;j<m;j++){
            cin>>command;
            if(command=="pushLeft"){
                scanf("%d",&value);
                if(counter==n){
                    printf("The queue is full\n");
                    continue;
                }
                printf("Pushed in left: %d\n",value);
                D.push_back(value);
                counter++;
            }
            else if(command=="pushRight"){
                scanf("%d",&value);
                if(counter==n){
                    printf("The queue is full\n");
                    continue;
                }
                printf("Pushed in right: %d\n",value);
                D.push_front(value);
                counter++;
            }
            else if(command=="popLeft"){
                if(counter==0){
                    printf("The queue is empty\n");
                    continue;
                }
                value=D.back();
                D.pop_back();
                printf("Popped from left: %d\n",value);
                counter--;
            }
            else if(command=="popRight"){
                if(counter==0){
                    printf("The queue is empty\n");
                    continue;
                }
                value=D.front();
                D.pop_front();
                printf("Popped from right: %d\n",value);
                counter--;
            }
        }
    }
    return 0;
}
