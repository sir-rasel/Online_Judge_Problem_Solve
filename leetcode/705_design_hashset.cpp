class MyHashSet {
    int *arr;
public:
    MyHashSet() {
        arr=new int[1000001] ;
        memset(arr,-1,sizeof(arr));
    }

    void add(int key) {
        arr[key]=1;
    }

    void remove(int key) {
        arr[key]=-1;
    }

    bool contains(int key) {
        return arr[key]==1;
    }
};
