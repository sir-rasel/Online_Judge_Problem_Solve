#include<bits/stdc++.h>
#define maxNum 100001
using namespace std;

vector<int> roads[maxNum];
bool visited[maxNum];

void prayatna(int start){
    visited[start] = true;
    for(auto j = roads[start].begin(); j != roads[start].end(); ++j)
        if(!visited[*j]) prayatna(*j);
}
int main (){
    int test;
    scanf("%d", &test);
    while (test--){
        int counter = 0;
        memset(visited, false, sizeof(visited));
        int n,e;
        scanf("%d %d", &n, &e);
        for(int i = 0; i < e; ++i){
            int a,b;
            scanf("%d %d", &a, &b);
            roads[a].push_back(b);
            roads[b].push_back(a);
        }
        for (int i = 0 ; i < n; ++i){
            if(!visited[i]){
                prayatna(i);
                counter++;
            }
        }
        printf("\n%d", counter);
        for(int i = 0; i < n; ++i){
            roads[i].clear();
        }
    }
    return 0;
}
