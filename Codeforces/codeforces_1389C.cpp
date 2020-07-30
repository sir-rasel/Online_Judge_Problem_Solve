#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e8;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        string s;
        cin>>s;
        vector<int>a(10,0);

        for(auto c: s) a[c-'0']++;
        int maxx = *max_element(a.begin(),a.end());

        for(int i=0;i<=9;i++){
            for(int j=0;j<=9;j++){
                int counter = 0;
                bool flag = true;
                for(int k=0;k<s.size();k++){
                    if(flag){
                        if(s[k]==(i+'0') ) {
                            counter++;
                            flag=false;
                        }
                    }
                    else{
                        if(s[k]== (j+'0') ){
                            counter++;
                            flag = true;
                        }
                    }
                }
                maxx = max(maxx,(counter/2)*2);
            }
        }
        printf("%d\n",(int)s.size() - maxx);
    }
    return 0;
}
