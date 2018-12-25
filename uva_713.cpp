#include <bits/stdc++.h>
using namespace std;

char res[300];

int calculate(string a,string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int i,j,as=a.size(),bs=b.size(),temp=0;
    for(i=0,j=0;i<as and i<bs;i++){
        int n1 = a[i]-'0';
        int n2 = b[i]-'0';
        if(n1+n2+temp==10) {
            res[j]='0';
            temp=1;
            j++;
        }
        else if(n1+n2+temp>10){
            res[j]=(n1+n2+temp-10)+48;
            temp=1;
            j++;
        }
        else{
            res[j]=(n1+n2+temp)+48;
            temp=0;
            j++;
        }
    }
    while(i<as){
        int n1 = a[i]-'0';
        if(n1+temp==10) {
            res[j]='0';
            temp=1;
            j++;
        }
        else if(n1+temp>10){
            res[j]=(n1+temp-10)+48;
            temp=1;
            j++;
        }
        else{
            res[j]=(n1+temp)+48;
            temp=0;
            j++;
        }
        i++;
    }
    while(i<bs){
        int n1 = b[i]-'0';
        if(n1+temp==10) {
            res[j]='0';
            temp=1;
            j++;
        }
        else if(n1+temp>10){
            res[j]=(n1+temp-10)+48;
            temp=1;
            j++;
        }
        else{
            res[j]=(n1+temp)+48;
            temp=0;
            j++;
        }
        i++;
    }
    if(temp!=0) {
        res[j]='1';
        j++;
    }
    return j;
}

int main(){
    int n;
    scanf("%d",&n);
    string a,b;
    while(n--){
        cin>>a>>b;
        if(a.size()>b.size()) for(int i=0;i<a.size()-b.size();i++) b+="0";
        else if(a.size()<b.size()) for(int i=0;i<b.size()-a.size();i++) a+="0";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int len = calculate(a,b);
        bool flag = false;
        for(int i=0;i<len;i++) {
            if(res[i]!='0') flag=true;
            if(flag) printf("%c",res[i]);
        }
        printf("\n");
    }
    return 0;
}
