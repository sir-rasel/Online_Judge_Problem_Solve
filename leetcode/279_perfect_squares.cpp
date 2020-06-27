class Solution {
public:
    bool isSquare(int n) {
        int sqroot = sqrt(n);
        return (n==(sqroot*sqroot));
    }
    int numSquares(int n) {
        while(n%4==0) n = n/4;
        if(n%8 == 7) return 4;
        if(isSquare(n)) return 1;
        for(int i=1;i*i<=n;i++) if(isSquare(n-i*i)) return 2;
        return 3;
    }
};
