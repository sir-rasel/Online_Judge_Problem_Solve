#include <bits/stdc++.h>
using namespace std;

int main(){
    char con[1005];
    int cs = 1;
    while(scanf("%s",con) and strcmp(con,"end")!=0){
        vector< stack<char> > st;
        for(int i=0;con[i]!='\0';i++){
            if(st.empty()){
                stack<char>temp;
                temp.push(con[i]);
                st.push_back(temp);
            }
            else{
                bool flag = true;
                for(int j=0;j<st.size();j++){
                    if(st[j].top()>=con[i]){
                        st[j].push(con[i]);
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    stack<char>temp;
                    temp.push(con[i]);
                    st.push_back(temp);
                }
            }
        }
        printf("Case %d: %d\n",cs++,st.size());
    }
    return 0;
}
