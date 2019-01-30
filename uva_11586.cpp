#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
        string s;
        getline(cin,s);
        int counter=0;
        for(auto it:s){
            if(it=='M') counter++;
            else if(it=='F') counter--;
        }
        if(counter==0 and s.size()>3) printf("LOOP\n");
        else printf("NO LOOP\n");
    }
    return 0;
}
