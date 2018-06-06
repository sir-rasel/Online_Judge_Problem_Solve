#include <bits/stdc++.h>
using namespace std;

int compfun(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}

int main(){
    int luckynumber[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int number;
    cin>>number;
    if(bsearch(&number,luckynumber,14,sizeof(int),compfun)){
        cout<<"YES"<<endl;
    }
    else{
        bool flag=false;
        for(int i=0;i<14 and luckynumber[i]<=number;i++){
            if(number%luckynumber[i]==0)
                flag=true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
