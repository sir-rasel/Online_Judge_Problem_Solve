#include <iostream>
using namespace std;

int main(){
    int n,arr[1001],j=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]) j++;
        else{
            j++;
            cout<<j<<" "<<arr[i]<<" ";
            j=0;
        }
    }
    cout<<endl;
    return 0;
}
