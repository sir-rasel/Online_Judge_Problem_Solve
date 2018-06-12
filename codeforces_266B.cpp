#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,time;
    cin>>n>>time;
    string sequence;
    cin>>sequence;
    while(time--){
        for(int i=0;i<sequence.length()-1;i++){
            if(sequence[i]=='B' and sequence[i+1]=='G'){
                char temp=sequence[i];
                sequence[i]=sequence[i+1];
                sequence[i+1]=temp;
                i++;
            }
        }
    }
    cout<<sequence<<endl;
    return 0;
}
