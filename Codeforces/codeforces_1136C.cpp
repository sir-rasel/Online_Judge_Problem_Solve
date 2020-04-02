#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int> >A,B;
vector<vector<int> >AswapableElement;
vector<vector<int> >BswapableElement;

void madeCommonArray(){
    AswapableElement.resize(n+m);
    BswapableElement.resize(n+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            AswapableElement[i+j].push_back(A[i][j]);
            BswapableElement[i+j].push_back(B[i][j]);
        }
    }
    for(int i=0;i<n+m;i++){
        sort(AswapableElement[i].begin(),AswapableElement[i].end());
        sort(BswapableElement[i].begin(),BswapableElement[i].end());
    }
}

bool checkIsPossible(){
    bool flag = true;
    for(int i=0;i<n+m;i++){
        for(int j=0;j<AswapableElement[i].size();j++){
            if(AswapableElement[i][j]!=BswapableElement[i][j])
               return false;
        }
    }
    return flag;
}

int main(){
    scanf("%d %d",&n,&m);
    A.resize(n);
    B.resize(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int num;
            scanf("%d",&num);
            A[i].push_back(num);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int num;
            scanf("%d",&num);
            B[i].push_back(num);
        }
    }
    madeCommonArray();

    if(checkIsPossible()) printf("YES\n");
    else printf("NO\n");
    return 0;
}
