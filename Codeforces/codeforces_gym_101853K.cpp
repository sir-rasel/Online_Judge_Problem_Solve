#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        getchar();
        while(n--){
            string s,title,author,journal,volume,number,pages,year,publisher;
            char ss[1000];
            gets(ss);
            for(int i=0;i<8;i++){
                gets(ss);
                s="";
                for(int j=0;ss[j]!='\0';++j){
                    s+=ss[j];
                }
                if(s[0]=='a') author=s;
                else if(s[0]=='j') journal=s;
                else if(s[0]=='n') number=s;
                else if(s[0]=='p' and s[1]=='a') pages=s;
                else if(s[0]=='p') publisher=s;
                else if(s[0]=='t') title=s;
                else if(s[0]=='v') volume=s;
                else if(s[0]=='y') year=s;
            }
            gets(ss);
            printf("%c%c. ",author[8],author[9]);
            for(int i=10,j=1; ; i++){
                if(author[i]== ' '){
                    j++;
                    if(j==2){
                        printf("%c",author[i+1]);
                        j=0;
                    }
                    if(j==1){
                        printf("%c%c. ",author[i+1],author[i+2]);
                    }
                }
                else if(author[i]==',') printf(", ");
                else if(author[i]=='}') {
                    printf(". ");
                    break;
                }
            }

            for(int i=7;title[i]!='}';i++) printf("%c",title[i]);
            printf(". ");

            for(int i=9;journal[i]!='}';i++) printf("%c",journal[i]);
            printf(". ");

            for(int i=6;year[i]!='}';i++) printf("%c",year[i]);
            printf(";");

            for(int i=8;volume[i]!='}';i++) printf("%c",volume[i]);
            printf("(");

            for(int i=8;number[i]!='}';i++) printf("%c",number[i]);
            printf("):");

            for(int i=7;pages[i]!='}';i++) printf("%c",pages[i]);
            printf(".\n");
        }
    }
    return 0;
}
