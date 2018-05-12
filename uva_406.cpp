#include <cstdio>
#define Max 1001
using namespace std;

int arr[Max],st[200],top=-1;

void push(int a){
    st[++top]=a;
}

void sieve(){
    for(int i=2;i<Max;i++) arr[i]=1;
    push(1);
    for(int i=2;i<Max;i++){
        if(arr[i]!=0){
            push(i);
            for(int j=i*i;j<Max;j+=i){
                arr[j]=0;
            }
        }
    }
}

void print(int a,int b){
    for(int i=a;i<b;i++) printf(" %d",st[i]);
    puts("\n");
}

int main(){
    sieve();
    int n,c;
    while(scanf("%d %d",&n,&c)==2){
        int counter=0;
        for(int i=0;st[i]<=n and i<=top;i++) counter++;
        printf("%d %d:",n,c);
        if(counter%2==0) c*=2;
        else c=c*2-1;
        if(c>counter) c=counter;
        int start=counter/2-c/2;
        int finish=start+c;
        print(start,finish);
    }
    return 0;
}
