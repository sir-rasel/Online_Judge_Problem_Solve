#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1000;
const ll limit = 1e9;
const double eps = 1e-4;

void possibility(int n, string in, string out){
    vector<vector<int> >p(n+2,vector<int>(n+2,1));

    for(int i=1;i<=n;i++){
        if(out[i-1]=='N'){
            for(int j=1;j<=n;j++){
                p[i][j] = 0;
            }
            p[i][i] = 1;
        }
        if(in[i-1]=='N'){
            for(int j=1;j<=n;j++){
                p[j][i] = 0;
            }
            p[i][i] = 1;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            p[i][j] = (p[i][j-1] and p[j-1][j]);
        }
        for(int j=i-1;j>0;j--){
            p[i][j] = (p[i][j+1] and p[j+1][j]);
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c",p[i][j]==1?'Y':'N');
        }
        printf("\n");
    }
}

int main(){
//    freopen("travel_restrictions_input.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        string incoming,outgoing;
        cin>>incoming>>outgoing;

        printf("Case #%d:\n",cs++);
        possibility(n,incoming,outgoing);
    }
    return 0;
}
