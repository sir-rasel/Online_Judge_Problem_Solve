#include <stdio.h>
char s;
char stacks[1000000];
int main() {
    int idx = 0;
    while(s = getchar()) {
        if(s == EOF)
            break;
            switch(s) {
                case 'a' ... 'z':
                    stacks[idx++] = s;
                    break;
                case 'A' ... 'Z':
                    stacks[idx++] = s;
                    break;
                default:
                    if(idx > 0) {
                        stacks[idx] = '\0';
                        switch(stacks[0]) {
                            case 'a':
                            case 'e':
                            case 'i':
                            case 'o':
                            case 'u':
                            case 'A':
                            case 'E':
                            case 'I':
                            case 'O':
                            case 'U':
                                printf("%say", stacks);
                                break;
                            default:
                                printf("%s%cay", stacks+1, stacks[0]);
                        }
                        idx = 0;
                    }
                    putchar(s);
            }
    }
    return 0;
}
