#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <int, int> pii;
const int mod = 1e9+7;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        pii score[n];
        for(int i=0;i<n;i++) scanf("%d %d",&score[i].first,&score[i].second);
        bool flag=true;
        if(score[0].first<score[0].second) flag = false;
        for(int i=1;i<n;i++){
            if(score[i].first<score[i].second or score[i].first<score[i-1].first){
                flag = false;
                break;
            }
            else if(score[i].first==score[i-1].first and score[i].second!=score[i-1].second){
                flag = false;
                break;
            }
            else{
                if(score[i].second<score[i-1].second){
                    flag = false;
                    break;
                }
                else if(score[i].first-score[i-1].first<score[i].second-score[i-1].second){
                    flag = false;
                    break;
                }
            }
        }
        if(flag) printf("yes\n");
        else printf("no\n");
    }
	return 0;
}
