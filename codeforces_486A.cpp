#include <iostream>
using namespace std;

int main(){
    long long int n,evenpart,oddpart;
    cin>>n;
    long long int temp=n/2;
    evenpart=temp*(temp+1);
    temp=n-temp;
    oddpart=(temp*temp);
    cout<<evenpart-oddpart<<endl;
    return 0;
}
