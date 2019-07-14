#include <bits/stdc++.h>
using namespace std;

const int maxx = 300;
int ans = 0;

struct Trie {
    int freq;
    Trie* next[3];
    Trie(){
        freq = 0;
        for (int i = 0; i < 3; i++)
            next[i] = NULL;
    }
} *root;

void insert(Trie*& head, char* str){
	if (head == nullptr)
		head = new Trie();
	Trie* curr = head;
	while (*str){
        int id = *str - '0';
        if (curr->next[id] == NULL)
            curr->next[id] = new Trie();
        curr = curr->next[id];
		curr->freq++;
		str++;
	}
}

void dfs(Trie* node, int depth){
	ans = max(ans,depth*node->freq);
	for(int i=0;i<3;i++){
        Trie *v = node->next[i];
        if(v!= nullptr) dfs(v,depth+1);
	}
}

void del(Trie* cur){
    for (int i = 0; i < 3; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}

int main(){
    int test;
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
        dfs(head,0);
        printf("%d\n",ans);
        del(head);
        ans = 0;
    }
	return 0;
}
