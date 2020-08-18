#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

void print(set<pii>s){
    for(auto it: s){
        printf("%d %d\n",it.first,it.second);
    }
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    map<int,int>counter;
    set<pii>seq;
    for(int i=0,j=0;i<n and j<=n-k;i++){
        if((i-j)==k-1){
            auto it = seq.lower_bound({counter[arr[i]], arr[i]});
            if (it != seq.end() and it->second == arr[i])
                seq.erase(it);
            counter[arr[i]]++;
            seq.insert({counter[arr[i]],arr[i]});

            if(seq.begin()->first == seq.rbegin()->first)
                printf("%d ",seq.begin()->second);
            else {
                auto it1 = seq.lower_bound({seq.rbegin()->first,0});
                printf("%d ",it1->second);
            }

            it = seq.lower_bound({counter[arr[j]], arr[j]});
            if (it != seq.end() and it->second == arr[j])
                seq.erase(it);

            counter[arr[j]]--;
            if(counter[arr[j]]) seq.insert({counter[arr[j]], arr[j]});
            j++;
        }
        else{
            auto it = seq.lower_bound({counter[arr[i]], arr[i]});
            if (it != seq.end() and it->second == arr[i])
                seq.erase(it);
            counter[arr[i]]++;
            seq.insert({counter[arr[i]],arr[i]});
        }
//        print(seq);
    }
    printf("\n");

    return 0;
}
