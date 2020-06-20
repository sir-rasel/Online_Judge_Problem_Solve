#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 1e6+10;

void result(){
    map<string,int>counter;
    char str[N];

    int n;
    scanf("%d",&n);

    while(n--){
        scanf("%s",str);

        string word = str;
        if(word.size()>2) sort(word.begin()+1,word.end()-1);
        counter[word]++;
    }

    int m;
    scanf("%d",&m);
    getchar();
    while(m--){
        scanf("%[^\n]",str);
        getchar();

        string word;
        stringstream s(str);
        ll ans = 1;
        while(s>>word){
            if(word.size()>2) sort(word.begin()+1,word.end()-1);
            ans *= counter[word];
        }

        printf("%lld\n",ans);
    }
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        printf("Case %d:\n",cs++);
        result();
    }
}
