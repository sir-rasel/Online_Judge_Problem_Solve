#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int depth=0,index=0,maximumSymbol=0,symbolIndex=0;
    int count1=0,count2=0;
    for(int i=1;i<=n;i++){
        int number;
        cin>>number;
        if(number==1) {
            count1++;
            count2++;
            if(count1>depth){
                depth=count1;
                index=i;
            }
        }
        else{
            count1--;
            count2++;
            if(count1==0){
                if(count2>maximumSymbol){
                    maximumSymbol=count2;
                    symbolIndex=i-count2+1;
                }
                count2=0;
            }
        }
    }
    cout<<depth<<" "<<index<<" "<<maximumSymbol<<" "<<symbolIndex<<endl;
    return 0;
}
