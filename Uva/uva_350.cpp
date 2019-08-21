//#include<bits/stdc++.h>
//using namespace std;
//
//map<int,int>cycle;
//
//int main(){
//    int z,i,m,l,cs=1;
//    while(scanf("%d %d %d %d",&z,&i,&m,&l)==4 and (z!=0 and i!=0 and m!=0 and l!=0)){
//        cycle.clear();
//        int c=0;
//
//        while(true){
//            int temp = ((l*z)+i)%m;
//            if(cycle.count(temp)!=0){
//                printf("Case %d: %d\n",cs++,c-cycle[temp]);
//                break;
//            }
//            else cycle[temp]=c;
//            l=temp;
//            c++;
//        }
//    }
//    return 0;
//}

/// Floyd Cycle finding algorithm
#include<bits/stdc++.h>
using namespace std;

int main(){
    int z,i,m,l,cs=1;
    while(scanf("%d %d %d %d",&z,&i,&m,&l)==4 and (z!=0 and i!=0 and m!=0 and l!=0)){
        int seed=l,h=l,t=l;
        while(true){
            t = ((t*z)+i)%m;
            h = ((h*z)+i)%m;
            h = ((h*z)+i)%m;
            if(t==h) break;
        }

        int c=0;
        while(true){
            t = ((t*z)+i)%m;
            if(t==h) break;
            c++;
        }

        printf("Case %d: %d\n",cs++,++c);
    }
    return 0;
}
