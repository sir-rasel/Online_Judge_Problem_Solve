#include <stdio.h>
int main(){
    int count;
    char c;
    count=0;
    while(scanf("%c",&c) && c!='\n'){
        if(c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='s'||c==' '||c=='v'||c=='y'||c=='.') count++;
        else if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='t'||c=='w'||c=='z'||c==',') count+=2;
        else if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='u'||c=='x'||c=='!') count+=3;
    }
    printf("%d\n",count);
    return 0;
}
