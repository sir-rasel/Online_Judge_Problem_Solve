#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int maxx = 1e6+5;

// approach 1
int findMaxGCD(vector<int>a, int n){
    vector<int>div(maxx,0);
    for(int i=0;i<n;i++)
        div[a[i]]++;

    for(int i=maxx-1;i>=1;i--){
        int j=i;
        int counter = 0;

        while(j<maxx){
            if(div[j]>=2) return j;
            else if(div[j]==1) counter++;

            j+=i;

            if(counter==2) return i;
        }
    }
}

//approach 2
int findMaxCommonDivisor(vector<int>a, int n){
    vector<int>div(maxx,0);
    for(int i=0;i<n;i++){
        int sq = sqrt(a[i]);
        for(int j=1;j<=sq;j++){
            if(a[i]%j==0){
                if(a[i]/j == j) div[j]++;
                else{
                    div[a[i]/j]++;
                    div[j]++;
                }
            }
        }
    }

    for(int i=maxx-1;i>=0;i--)
        if(div[i]>1)
            return i;
}

int main(){
    int n;
    scanf("%d",&n);
    vector<int>a(n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

//    int ans = findMaxCommonDivisor(a,n);
    int ans = findMaxGCD(a,n);
    printf("%d\n",ans);

    return 0;
}
