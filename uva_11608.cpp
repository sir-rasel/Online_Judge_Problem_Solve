#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int readyproblem,CASE=0;
    char c='(';
    while(cin>>readyproblem and readyproblem>=0){
        vector<int>ready,need;
        for(int i=0;i<12;i++){
            int num;
            cin>>num;
            ready.push_back(num);
        }
        for(int i=0;i<12;i++){
            int num;
            cin>>num;
            need.push_back(num);
        }
        int temp=readyproblem;
        printf("Case %d:\n",++CASE);
        for(int i=0;i<12;i++){
            if(temp<need[i]) {
                    printf("No problem. :%c\n",c);
            }
            else {
                printf("No problem! :D\n");
                temp-=need[i];
            }
            temp+=ready[i];
        }
    }
    return 0;
}
