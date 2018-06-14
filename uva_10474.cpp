#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarysearch(vector<int>v,int numbertobefound){
    int start=0,high=v.size()-1,index=-1;
    while(start<=high){
        int mid=(start+high)/2;
        if(v[mid]==numbertobefound){
            index=mid+1;
            high=mid-1;
        }
        else if(v[mid]>numbertobefound) high=mid-1;
        else start=mid+1;
    }
    return index;
}

int main(){
    int numberofmarbel,query,cases=0;
    char c='#';
    while(cin>>numberofmarbel>>query and (numberofmarbel!=0 and query!=0) ){
        vector<int>marbel;
        for(int i=0;i<numberofmarbel;i++){
            int n;
            cin>>n;
            marbel.push_back(n);
        }
        sort(marbel.begin(),marbel.end());
        cout<<"CASE"<<c<<" "<<++cases<<":"<<endl;
        for(int i=0;i<query;i++){
            int n;
            cin>>n;
            int index=binarysearch(marbel,n);
            if(index==-1) cout<<n<<" not found"<<endl;
            else cout<<n<<" found at "<<index<<endl;
        }
    }
    return 0;
}
