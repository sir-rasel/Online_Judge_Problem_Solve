#include <iostream>
#include <cstdlib>
using namespace std;

int comp(const void *a, const void *b){
    return (*(int*)a-*(int*)b);
}

int main(){
    int teacher,list1[15001],n,student,temp=0,*p;
    cin>>teacher;
    for(int i=0;i<teacher;i++){
        cin>>list1[i];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>student;
        p = (int*) bsearch(&student,list1,teacher,sizeof(int),comp);
        if(p!=NULL) temp++;
    }
    cout<<temp<<endl;
    return 0;
}
