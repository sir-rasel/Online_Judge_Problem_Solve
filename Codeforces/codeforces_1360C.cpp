#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const double pi = acos(-1);
const int Max = 1e6+10;

int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>a(n),even,odd,one;
        for(auto &it:a){
            scanf("%d",&it);
            if(it&1) odd.push_back(it);
            else even.push_back(it);
        }

        if(even.size()%2==0 and odd.size()%2==0)
            printf("YES\n");
        else{
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());

            int i=0,j=0,ods=odd.size(),evs=even.size();
            while(i<even.size() and j<odd.size()){
                if(abs(even[i]-odd[j])==1){
                    ods--;
                    evs--;
                    break;
                }

                if(even[i]<odd[j]) i++;
                else j++;
            }

            if(ods%2==0 and evs%2==0)
                printf("YES\n");
            else printf("NO\n");
        }
    }
	return 0;
}
