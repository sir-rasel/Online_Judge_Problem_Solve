#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int num;
    while(cin>>num and num!=0){
        char binary[10000];
        int index=0,parity=0;
        while(num){
            int temp=(num%2);
            if(temp==1) parity++;
            binary[index++]=temp+48;
            num/=2;
        }
        printf("The parity of ");
        for(int i=--index;i>=0;i--){
            cout<<binary[i];
        }
        printf(" is %d (mod 2).\n",parity);
    }
    return 0;
}
