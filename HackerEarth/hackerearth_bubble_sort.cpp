#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int bubbleSort(vector<int>a, int n){
    int counter = 0;
    bool flag = true;

    while(flag){
        flag = false;
        counter++;

        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag = true;
                swap(a[i],a[i+1]);
            }
        }
    }
    return counter;
}

int main(){
    int n;
    scanf("%d",&n);
    vector<int>a(n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int counter = bubbleSort(a,n);
    printf("%d\n",counter);

    return 0;
}
