#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e8;
const double eps = 1e-4;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int k;
        scanf("%d",&k);

        vector<vector<char> >s(8,vector<char>(8,'.'));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(k>0) s[i][j]='.',k--;
                else s[i][j]='X';
            }
        }
        s[0][0]='O';

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                printf("%c",s[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
