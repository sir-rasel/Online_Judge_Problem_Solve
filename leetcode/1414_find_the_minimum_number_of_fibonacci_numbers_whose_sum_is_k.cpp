class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int>fib(2,1);
        int temp=0;
        while(temp<=1000000001){
            int i = fib.size()-1;
            int j = i-1;
            temp = fib[i]+fib[j];
            fib.push_back(temp);
        }

        int ans = 0;
        while(k>0){
            auto it = lower_bound(fib.begin(),fib.end(),k);
            if(it==fib.end() or *it>k) it--;
            k-=*it;
            ans++;
        }
        return ans;
    }
};
