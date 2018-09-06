#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) and n){

        while(1){

            vector<int>rail;
            int num;
            scanf("%d",&num);
            if(num==0) break;
            rail.push_back(num);

            for(int i=0;i<n-1;i++){
                int a;
                scanf("%d",&a);
                rail.push_back(a);
            }

            stack<int>line;
            int j = 0;

            for(int i=1;i<=n;i++){
                line.push(i);
                while(!line.empty() and line.top()==rail[j]){
                    j++;
                    line.pop();
                    if(j>=rail.size()) break;
                }
            }
            if(line.empty()) printf("Yes\n");
            else printf("No\n");
        }
        printf("\n");
    }
    return 0;
}
