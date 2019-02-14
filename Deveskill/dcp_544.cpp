#define ONLINE_JUDGE 1
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        string a;
        cin>>a;
        if(a=="Quill") printf("I am going to ask you this one time, where is Gamora?\n");
        else if(a=="Stark") printf("I will do you one better, who is Gamora?\n");
        else if(a=="Drax") printf("I will do you one better, why is Gamora?\n");
        else printf("What is Gamora?\n");
    }
    return 0;
}
