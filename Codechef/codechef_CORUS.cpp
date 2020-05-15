#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,q;
        scanf("%d %d",&n,&q);
        string s;
        cin>>s;
        vector<int>arr(30,0);

        for(int i=0;i<s.size();i++) arr[s[i]-'a']++;

        while(q--){
            int res=0,c;
            scanf("%d",&c);

            for(int i=0;i<30;i++)
                if(arr[i]>c) res+=(arr[i]-c);

            printf("%d\n",res);
        }

    }
    return 0;
}
