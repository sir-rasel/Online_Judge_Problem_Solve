#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,temp;
    cin>>s;
    int n = s.size();
    if(n<=3) cout<<s<<endl;
    else{
        if(n%3!=0){
            if(n%3!=0) for(int i=0;i<n%3;i++) printf("%c",s[i]);
            int counter=0;
            for(int i=n%3;i<n;i++){
                if(counter%3==0) printf(",");
                printf("%c",s[i]);
                counter++;
            }
            printf("\n");
        }
        else{
            for(int i=0;i<n;i++){
                printf("%c",s[i]);
                if((i+1)%3==0 and i!=n-1) printf(",");
            }
            printf("\n");
        }
    }
    return 0;
}
