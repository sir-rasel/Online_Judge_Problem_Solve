#include <bits/stdc++.h>
using namespace std;

const int maxx = 1000005;

struct Trie{
    int counter;
	unordered_map<char, Trie*> map;
	Trie(){
        counter=0;
        map.clear();
	}
};

Trie* getNewTrieNode(){
	Trie* node = new Trie;
	return node;
}

void insert(Trie*& head, char* str){
	if (head == nullptr)
		head = getNewTrieNode();
	Trie* curr = head;
	while (*str){
		if (curr->map.find(*str) == curr->map.end())
			curr->map[*str] = getNewTrieNode();
		curr = curr->map[*str];
		curr->counter++;
		str++;
	}
}

int search(Trie* head, char* str){
	if (head == nullptr)
		return 0;
	Trie* curr = head;
	int ans=INT_MAX;
	while (*str){
		curr = curr->map[*str];
		if (curr == nullptr)
			return 0;
        ans=min(ans,curr->counter);
		str++;
	}
	return ans;
}

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
	Trie* head = nullptr;
    for (int i = 1; i <= n; i++) {
        char str[maxx];
        scanf("%s", str);
        insert(head,str);
    }
    for (int i = 1; i <= q; i++) {
        char str[maxx];
        scanf("%s", str);
        printf("%d\n",search(head,str));
    }
	return 0;
}
