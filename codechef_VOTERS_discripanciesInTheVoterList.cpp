#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int>voters;
    set<int>finalList;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    for(int i=0;i<n1;i++){
        int id;
        cin>>id;
        voters.insert(id);
    }
    for(int i=0;i<n2;i++){
        int id;
        cin>>id;
        voters.insert(id);
    }
    for(int i=0;i<n3;i++){
        int id;
        cin>>id;
        voters.insert(id);
    }
    for(multiset<int>:: iterator it=voters.begin();it!=voters.end();it++){
        if(voters.count(*it)>1) finalList.insert(*it);
    }
    cout<<finalList.size()<<endl;
    for(set<int>:: iterator it=finalList.begin();it!=finalList.end();it++){
        cout<< *it << endl;
    }
    return 0;
}
