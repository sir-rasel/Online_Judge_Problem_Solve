#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i=1;i<=testcase;i++){
        int mangotype,capability;
        vector<int>eachtypemango;
        vector<int>capabilityeachtypemango;
        cin>>mangotype>>capability;
        for(int j=0;j<mangotype;j++){
            int n;
            cin>>n;
            eachtypemango.push_back(n);
        }
        for(int j=0;j<mangotype;j++){
            int n;
            cin>>n;
            capabilityeachtypemango.push_back(n);
        }
        int temp=0,flag=0;
        for(int j=0;j<mangotype;j++){
            if(eachtypemango[j]<=capabilityeachtypemango[j]) temp+=eachtypemango[j];
            else flag++;
        }
        if(flag==0 and temp<=capability) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
}
