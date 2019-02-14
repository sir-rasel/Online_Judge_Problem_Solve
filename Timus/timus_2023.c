#include <stdio.h>
#include <string.h>
int main(){
    char case1[9][9] = {"Alice", "Ariel","Aurora","Phil", "Peter", "Olaf","Phoebus", "Ralph", "Robin"};
    char case2[9][9] = {"Bambi", "Belle", "Bolt","Mulan", "Mowgli", "Mickey","Silver", "Simba", "Stitch"};
    char case3[9][9] = {"Dumbo", "Genie", "Jiminy","Kuzko", "Kida", "Kenai","Tarzan", "Tiana", "Winnie"};
    char name[9];
    int n,i,step=0,position=1,flag,temp;
    scanf("%d",&n);
    while(n--){
        scanf("%s",name);
        flag=0;
        if(position==2){
            for(i=0;i<9 && flag==0;i++){
                temp=strcmp(case1[i],name);
                if(temp==0) {
                    step++;
                    position=1;
                    flag++;
                    break;
                }
            }
            for(i=0;i<9 && flag==0 ;i++){
                temp=strcmp(case3[i],name);
                if(temp==0) {
                    flag++;
                    position=3;
                    step++;
                    break;
                }
            }
        }
        else if(position==3){
            for(i=0;i<9 && flag==0;i++){
                temp=strcmp(case2[i],name);
                if(temp==0) {
                    step++;
                    position=2;
                    flag++;
                    break;
                }
            }
            for(i=0;i<9 && flag==0 ;i++){
                temp=strcmp(case1[i],name);
                if(temp==0) {
                    flag++;
                    position=1;
                    step+=2;
                    break;
                }
            }
        }
        else if(position==1){
            for(i=0;i<9 && flag==0;i++){
                temp=strcmp(case2[i],name);
                if(temp==0) {
                    step++;
                    position=2;
                    flag++;
                    break;
                }
            }
            for(i=0;i<9 && flag==0 ;i++){
                temp=strcmp(case3[i],name);
                if(temp==0) {
                    flag++;
                    position=3;
                    step+=2;
                    break;
                }
            }
        }

    }
    printf("%d\n",step);
    return 0;
}
