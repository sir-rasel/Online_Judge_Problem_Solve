#include <bits/stdc++.h>
using namespace std;

struct node {
    bool endmark;
    node* next[11];
    node(){
        endmark = false;
        for (int i = 0; i < 11; i++)
            next[i] = NULL;
    }
} * root;

bool result = false;

void insert(char* str, int len){
    node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = str[i] - '0';
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
        if(!result) result=curr->endmark;
    }
    for (int i = 0; i < 11; i++)
        if(curr->next[i]) result = true;
    curr->endmark = true;
}

void del(node* cur){
    for (int i = 0; i < 11; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
    result = false;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        root = new node();
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            char str[30];
            scanf("%s",str);
            if(result) continue;
            insert(str, strlen(str));
        }
        if(result) printf("NO\n");
        else printf("YES\n");
        del(root);
    }
    return 0;
}
