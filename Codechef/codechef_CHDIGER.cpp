#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
deque<char>number;

ull valueCount(){
    ull ans = 0;
    for(int i=0;i<number.size();i++) ans = (ans*10)+(number[i]-48);
    return ans;
}

ull valueCountFirst(string s){
    ull ans = 0;
    for(int i=0;i<s.size();i++) ans = (ans*10)+(s[i]-48);
    return ans;
}

int main(){
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
        number.clear();
        string s;
        char c;
        cin>>s>>c;

        ull res=valueCountFirst(s);
        sort(s.begin(),s.end(),less<char>());
        int totalDigit=s.size();
        for(int i=0;i<totalDigit;i++) number.push_back(s[i]);

        int start=0;
        while(totalDigit--){
            number.pop_front();
            number.push_back(c);
            res = min(res,valueCount());
        }
        printf("%llu\n",res);
    }
}
