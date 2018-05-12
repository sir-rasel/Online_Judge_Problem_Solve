#include <stdio.h>
int main(){
    int test,i,count;
    char c;
    scanf("%d",&test);
    getchar();
    for(i=1;i<=test;i++){
        count=0;
        while(scanf("%c",&c) && c!='\n'){
            if(c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'||c==' ') count++;
            else if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x') count+=2;
            else if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y') count+=3;
            else if(c=='s'||c=='z') count+=4;
        }
        printf("Case #%d: %d\n",i,count);
    }
    return 0;
}
