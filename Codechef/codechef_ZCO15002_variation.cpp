#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int count=0,k,n;
    cin>>n>>k;
    long long int element[n+5];
    for(int i=0;i<n;i++){
        cin>>element[i];
    }
    sort(element,element+n);
    for(long long int i=0,j=1;i<n;){
        if(abs(element[i]-element[j])>=k) {
            count+=(n-j);
            i++;
        }
        else j++;
    }
    cout<<count<<endl;
    return 0;
}
