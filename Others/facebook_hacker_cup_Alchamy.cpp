 #include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        string s;
        cin>>n>>s;

        int a=0,b=0;
        for(auto c:s){
            if(c == 'A') a++;
            else b++;
        }

        printf("Case #%d: ",cs++);
        if(abs(a-b)==1) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
