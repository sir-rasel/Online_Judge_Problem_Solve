#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);
        string s;
        for(int i=0;i<n;i++) s.push_back(65+i);
        printf("Case %d:\n",cs++);
        do{
            cout<<s<<endl;
        }while(next_permutation(s.begin(),s.end()) and --k);
    }
    return 0;
}
