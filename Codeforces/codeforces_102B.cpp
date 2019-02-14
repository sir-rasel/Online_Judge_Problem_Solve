#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    unsigned long long int sum=0;
    int temporary=0,counter=0;
    while(scanf("%c",&c) and c!='\n'){
        sum+=c-'0';
        temporary++;
    }
    if(temporary>=2) counter++;
    while(sum>9){
        unsigned long long int temp=0;
        while(sum){
            temp+=(sum%10);
            sum/=10;
        }
        counter++;
        sum=temp;
    }
    printf("%d\n",counter);
    return 0;
}
