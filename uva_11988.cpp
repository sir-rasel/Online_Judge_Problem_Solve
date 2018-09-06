#include <cstdio>
#include <iostream>
#include <list>
using namespace std;

int main(){
    char str[100005];
    while(cin>>str){
        list<char>baiju;
        auto it = baiju.begin();
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='['){
                it=baiju.begin();
            }
            else if(str[i]==']') {
                it = baiju.end();
            }
            else baiju.insert(it,str[i]);
        }
        for(auto it = baiju.begin();it!=baiju.end();it++){
            printf("%c",*it);
        }
        printf("\n");
    }
    return 0;
}
