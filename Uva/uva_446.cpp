#include<bits/stdc++.h>
using namespace std;

map<char,int>v;

int power(int p){
    int ans=1;
    for(int i=1;i<=p;i++){
        ans*=16;
    }
    return ans;
}

int value(string s){
    int ans=0;
    for(int i=s.size()-1,j=0;i>=0;i--,j++){
        if(s[i]>='0' and s[i]<='9') ans+=( (s[i]-'0')*power(j) );
        else ans+=( v[s[i]]*power(j) );
    }
    return ans;
}

int main(){
    v['A']=10,v['B']=11,v['C']=12,v['D']=13,v['E']=14,v['F']=15;
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        string a,sign,b;
        cin>>a>>sign>>b;
        int num1,num2;
        num1=value(a);
        num2=value(b);
        bitset<13>first(num1),second(num2);
        if(sign=="+") cout<<first<< " "<<sign<< " "<<second<< " = "<<num1+num2<<endl;
        else cout<<first<< " "<<sign<< " "<<second<< " = "<<num1-num2<<endl;
    }
    return 0;
}
