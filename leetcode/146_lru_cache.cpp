class LRUCache {
public:
    int size;
    list<pair<int,int>> dl;
    unordered_map<int, list<pair<int,int>>::iterator> mp;
    LRUCache(int capacity) {
        size = capacity;
    }

    int get(int key) {
        if(mp.find(key) == mp.end()){
            return -1;
        }else{
            auto it = mp[key];
            int val = it->second;
            dl.erase(it);

            dl.push_front({key,val});
            mp[key] = dl.begin();
            return val;
        }
    }

    void put(int key, int value) {
         if(mp.find(key) != mp.end()){
            auto it = mp[key];
            dl.erase(it);
        }else{
             if(mp.size() == size){
                 auto rit = dl.rbegin();
                 mp.erase(rit->first);
                 dl.pop_back();
             }
        }
        dl.push_front({key, value});
        mp[key] = dl.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
