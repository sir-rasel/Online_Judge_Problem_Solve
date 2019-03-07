#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
map<int,int>position;
string s,c;

ull valueCount(string temp){
    ull ans = 0;
    for(int i=0;i<temp.size();i++)
        if(!position[i]) ans = (ans*10)+(temp[i]-48);
    return ans;
}

int main(){
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
        position.clear();
        cin>>s>>c;

        ull res=valueCount();

        int totalDigit=s.size();
        for(int i=0;i<totalDigit;i++){
            string temp=s;
            temp+=c;
            position[i]++;
            ull tempRes = valueCount(temp);
            if(tempRes<=res) {
                res=tempRes;
                s+=c;
            }
            else position[i]=0;
        }
        printf("%llu\n",res);
    }
}
