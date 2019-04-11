#include<bits/stdc++.h>
using namespace std;

int compare(const void *a, const void *b){
    int *x,*y;
    x=(int *)a;
    y=(int *)b;
    return *y-*x;
}

int main(){
    int test,y=1;
    scanf("%d",&test);
    while(test--){
        string s1,s2;
        cin >> s1 >> s2;
        int num1[130],num2[130],num3[130];
        int i,j,k,l,m,n;
        if(y>1)printf("\n");
        y++;
        map<int,int>word1,word2;
        for(i=0;i<130;i++) num1[i]=num2[i]=num3[i]=0;
        for(i=0;i<s1.length();i++) num1[s1[i]]++;
        for(i=0;i<130;i++) word1[num1[i]]=i;
        for(i=0;i<s2.length();i++) num2[s2[i]]++;
        for(i=0;i<130;i++) word2[num2[i]]=i;

        qsort(num1,130,sizeof(int),compare);
        qsort(num2,130,sizeof(int),compare);

        for(i=0;i<130;i++){
            if(num2[i]>0){
                n=word2[num2[i]];
                m=word1[num1[i]];
                num3[n]=m;
            }
            else break;
        }
        for(i=0;i<s2.length();i++){
            n=s2[i];
            printf("%c",num3[n]);
        }
        printf("\n");
    }
    return 0;
}
