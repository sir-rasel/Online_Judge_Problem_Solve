#include <bits/stdc++.h>
using namespace std;

string s = "ROYGBIV";
string arr[]={"","G","GB","YGB","YGBI","OYGBI","OYGBIV"};

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n/7;i++) cout<<s;
    cout<<arr[n%7]<<endl;
    return 0;
}
