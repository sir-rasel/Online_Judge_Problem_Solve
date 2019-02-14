#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int cs=1;cs<=test;cs++){

        long int num;
        char name[10];
        scanf("%ld %s",&num,name);
        printf("Case %d: ",cs);

        if(strcmp(name,"Alice")==0){
            if(num%3==1) printf("Bob\n");
            else printf("Alice\n");
        }
        else {
            if(num%3==0) printf("Alice\n");
            else printf("Bob\n");
        }

    }
    return 0;
}
