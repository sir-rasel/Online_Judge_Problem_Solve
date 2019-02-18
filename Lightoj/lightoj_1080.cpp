#include<bits/stdc++.h>
#define MAXN 100005
using namespace std;

int segment[4*MAXN],n,q,queryBit;
char arr[MAXN],tree[4*MAXN];

void buildTree(int nod,int start,int finish){
    if(start==finish){
        tree[nod]=arr[start];
        return;
    }

    int left = nod*2;
    int right = nod*2+1;
    int mid = (start+finish)/2;

    buildTree(left,start,mid);
    buildTree(right,mid+1,finish);

    segment[nod]=segment[left]=segment[right]=0;
}

void query(int nod,int start,int finish,int pos,int counter=0){
    counter+=segment[nod];
    if(start==finish){
        queryBit = tree[nod]-'0';
        if(counter&1) queryBit = 1-queryBit;
        return;
    }

    int left = nod*2;
    int right = nod*2+1;
    int mid = (start+finish)/2;
    if(pos<=mid) query(left,start,mid,pos,counter);
    else query(right,mid+1,finish,pos,counter);
}

void update(int nod,int start,int finish,int i,int j){
    if(i>finish or j<start) return;
    if(i<=start and j>=finish){
        segment[nod]++;
        return;
    }

    int left = nod*2;
    int right = nod*2+1;
    int mid = (start+finish)/2;

    update(left,start,mid,i,j);
    update(right,mid+1,finish,i,j);
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        scanf("%s",arr+1);
        n = strlen(arr+1);
        buildTree(1,1,n);
        scanf("%d",&q);
        printf("Case %d:\n",cs++);
        while(q--){
            getchar();
            char c;
            scanf("%c",&c);
            if(c=='I'){
                int i,j;
                scanf("%d %d",&i,&j);
                update(1,1,n,i,j);
            }
            else if(c=='Q'){
                int pos;
                scanf("%d",&pos);
                query(1,1,n,pos);
                printf("%d\n",queryBit);
            }
        }
    }
    return 0;
}

