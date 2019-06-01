#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    getchar();
    while(test--){
        string str,ans="";
        cin>>str;
        int count=0;
        bool flag=false;
        printf("Case %d: ",cs++);
        for(int i=0; i<str.size()+1; i++){
            if(count>9){
                flag=false;
                break;
            }
            if(i>0){
                if(str[i]!=str[i-1]){
                    char a = count +'0';
                    ans+=a;
                    ans+=str[i-1];
                    count=0;
                    flag=true;
                }
            }
            count++;
        }
        if(flag)cout<<ans<<endl;
        else printf("-1\n");
    }
    return 0;
}
