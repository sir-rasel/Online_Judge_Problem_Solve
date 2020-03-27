#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        string s,a="",b="";
        cin>>s;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                a.push_back('0');
                b.push_back('0');
            }
            else if(s[i]=='1'){
                if(!flag){
                    a.push_back('1');
                    b.push_back('0');
                    flag=true;
                }
                else{
                    a.push_back('0');
                    b.push_back('1');
                }
            }
            else {
                if(!flag){
                    a.push_back('1');
                    b.push_back('1');
                }
                else {
                    a.push_back('0');
                    b.push_back('2');
                }
            }
        }
        cout<<a<<endl<<b<<endl;
    }
    return 0;
}
