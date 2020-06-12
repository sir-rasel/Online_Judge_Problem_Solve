class RandomizedSet {
    unordered_map<int, int> cache;
    vector<int> values;
    int n;
public:
    RandomizedSet() {
        cache.clear();
        values.clear();
        n = 0;
    }

    bool insert(int val) {
        if(cache.count(val))
            return false;

        cache[val] = n++;
        values.push_back(val);
        return true;
    }

    bool remove(int val) {
        if(!cache.count(val))
            return false;

        int ind = cache[val];
        int last_element = values.back();
        values[ind] = last_element;
        cache[last_element] = ind;
        values.pop_back();
        n--;

        cache.erase(val);
        return true;
    }

    int getRandom() {
        return values[rand()%n];
    }
};
