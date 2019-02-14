#include <iostream>
#include <cstdio>

using namespace std;

int candidate[10001]={0};

int main(){
    int can,elector,vote;
    char c='%';
    cin>>can>>elector;
    for(int i=0;i<elector;i++){
        cin>>vote;
        candidate[vote]++;
    }
    for(int i=1;i<=can;i++){
        double temp= ( candidate[i]/double (elector) )*100;
        printf("%.2lf%c\n",temp,c);
    }
    return 0;
}
