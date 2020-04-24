class Solution {
    int countBit(int n){
        int bit = -1;
        while(n){
            n>>=1;
            bit++;
        }
        return bit;
    }
public:
    int rangeBitwiseAnd(int m, int n) {
        int ans = 0;
        while(m and n){
            int p1 = countBit(m);
            int p2 = countBit(n);

            if(p1!=p2) break;
            else{
                ans += (1<<p1);
                m-=(1<<p1);
                n-=(1<<p2);
            }
        }
        return ans;
    }
};
