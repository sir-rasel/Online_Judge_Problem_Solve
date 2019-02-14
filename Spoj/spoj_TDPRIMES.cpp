#include <bits/stdc++.h>
#define mx 100000001
using namespace std;

int status[(mx>>6)+2];

bool Check(int N,int pos){
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos){
    return N = N | (1<<pos);
}

void sieve() {
     int sqrtN = sqrt(mx)+1;
     for( int i = 3; i <= sqrtN; i += 2 ) {
		 if( Check(status[i>>6],((i>>1)&31))==false ) {
	 		 for( int j = i*i; j <= mx; j += (i<<1) ) {
				 status[j>>6]=Set( status[j>>6],((j>>1)&31) );
	 		 }
		 }
	 }
}

int main(){
    sieve();
    printf("%d\n",2);
    for(int i=3,j=2;i<mx;i+=2){
        if(Check(status[i>>6],((i>>1)&31))==false) {
            if(j%100==1)
                printf("%d\n",i);
            j++;
        }
    }
    return 0;
}



//#include <bits/stdc++.h>
//using namespace std;
//#define MAX 100000000
//#define LIM 10000
//int flagArr[MAX>>6];
//#define ifComp(x) (flagArr[x>>6]&(1<<((x>>1)&31)))
//#define isComp(x) (flagArr[x>>6]|=(1<<((x>>1)&31)))
//void BitSeive()
//{
//       register int i,j,k;
//       for(i=3;i<LIM;i+=2)
//       {
//              if(!ifComp(i))
//              {
//                     for(j=i*i,k=i<<1;j<MAX;j+=k)
//                            isComp(j);
//              }
//       }
//       printf("2\n");
//       for(i=3,j=2;i<MAX;i+=2)
//       {
//              if(!ifComp(i))
//              {
//                     if(j%100==1)
//                            printf("%d\n",i);
//                     j++;
//              }
//       }
//}
//int main() {
//       BitSeive();
//       return 0;
//}
