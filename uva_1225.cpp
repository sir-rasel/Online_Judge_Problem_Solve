#include <iostream>
#include <map>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int number;
        cin>>number;
        map<int,int>indexvalue;
        for(int i=1;i<=number;i++){
            int n=i;
            while(n){
                int temp=n%10;
                indexvalue[temp]++;
                n/=10;
            }
        }
        for(int i=0;i<10;i++){
            if(i!=9) cout<<indexvalue[i]<<" ";
            else cout<<indexvalue[i]<<endl;
        }
    }
    return 0;
}
