#include <iostream>
using namespace std;

int number(long long int a,long long int b,long long int c,long long intd,long long int l);

int main(){
    long long int a,b,c,d,l;
    while((cin>>a>>b>>c>>d>>l) && (a!=0 || b!=0 || c!=0 || d!=0 || l!=0)){
        cout<<number(a,b,c,d,l)<<endl;
    }
    return 0;
}

int number(long long int a,long long int b,long long int c,long long int d,long long int l){
    long long int value,temp=0;
    for (int i=0;i<=l;i++){
        value=a*i*i+b*i+c;
        if(value%d==0) temp++;
    }
    return temp;
}
