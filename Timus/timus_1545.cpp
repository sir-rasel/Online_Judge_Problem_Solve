#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int test;
    string arr[1001];
    char ch;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>arr[i];
    }
    sort(arr,arr+test);
    cin>>ch;
    for(int i=0;i<test;i++){
        if(arr[i][0]==ch) cout<<arr[i]<<endl;
        else if(arr[i][0]>ch) break;
    }
    return 0;
}
