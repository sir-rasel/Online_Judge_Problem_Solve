#include <bits/stdc++.h>
using namespace std;

const int maxx = 15;
bool flag=true;

struct Trie {
    bool endmark;
    Trie* next[11];
    Trie(){
        endmark = false;
        for (int i = 0; i < 11; i++)
            next[i] = NULL;
    }
} *root;

void insert(Trie*& head, char* str){
	if (head == nullptr)
		head = new Trie();
	Trie* curr = head;
	bool temp = true;
	while (*str){
        int id = *str - '0';
        if (curr->next[id] == NULL){
            curr->next[id] = new Trie();
            temp=false;
        }
        curr = curr->next[id];
        if(curr->endmark) flag=false;
		str++;
	}
	curr->endmark=true;
	if(temp) flag=false;
}

void del(Trie* cur){
    for (int i = 0; i < 11; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        Trie* head = nullptr;
        for (int i = 1; i <= n; i++) {
            char str[maxx];
            scanf("%s", str);
            insert(head,str);
        }
        printf("Case %d: ",cs++);
        if(flag) printf("YES\n");
        else printf("NO\n");

        del(head);
        flag = true;
    }
	return 0;
}
