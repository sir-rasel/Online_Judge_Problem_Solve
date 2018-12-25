#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int>v;
    while(scanf("%d",&n) and (n>1 and n<50) ){
        v.clear();
        for(int i=0;i<n;i++){
            int temp;
            scanf("%d",&temp);
            v.push_back(temp);
        }
        int counter=0;
        int t = (n*(n-1))/2;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(v[i],v[j])==1) counter++;
            }
        }
        if(counter!=0){
            double pi = sqrt(6*t*1.0/counter);
            printf("%f\n",pi);
        }
        else printf("No estimate for this data set.\n");
    }
    return 0;
}
