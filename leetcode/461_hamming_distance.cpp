class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32>a(x),b(y);
        int res = 0;
        for(int i=0;i<32;i++)
            if(a[i]!=b[i])
                res++;
        return res;
    }
};
