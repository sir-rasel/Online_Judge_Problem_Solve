class Trie {
    public:
    bool endOfWord;
    Trie* children[26];

    Trie(){
        endOfWord = false;
        for(int i = 0; i < 26; i++)
            children[i] = NULL;
    }

    void insert(string word){
        Trie* t = this;

        for(int i = 0; i < word.size(); i++){
            int ind = word[i] - 'a';
            if(t->children[ind] == NULL)
                t->children[ind] = new Trie();
            t = t->children[ind];
        }

        t->endOfWord = true;
    }

    bool search(string word){
        Trie* t = this;

        for(int i = 0; i < word.size(); i++){
            int ind = word[i] - 'a';
            if(t->children[ind] == NULL)
                return false;
            t = t->children[ind];
        }
        if(t->endOfWord)
            return true;
        return false;
    }

    bool searchwithdots(string word){
        Trie* t = this;

        for(int i = 0; i < word.size() ; i++){
            if(word[i] == '.'){
                if(i == word.size()-1){
                    for(int i = 0; i < 26; i++){
                        if(t->children[i] and t->children[i]->endOfWord)
                            return true;
                    }
                    return false;
                }
                else {
                    string rem = word.substr(i+1);
                    for(int i = 0; i < 26; i++){
                        if(t->children[i]){
                            if(t->children[i]->searchwithdots(rem))
                                return true;
                        }
                    }
                    return false;
                }
            }
            else {
                int ind = word[i] - 'a';
                if(t->children[ind] == NULL)
                    return false;
                t = t->children[ind];
            }
        }

        if(t->endOfWord)
            return true;
        return false;
    }

};

class WordDictionary {
public:
    Trie* trie;
    WordDictionary() {
        trie = new Trie();
    }

    void addWord(string word) {
        trie->insert(word);
    }

    bool search(string word) {
        return trie->searchwithdots(word);
    }
};
