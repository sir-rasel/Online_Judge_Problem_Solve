class Solution {
    int sod(int v){
        int num = 0;
	    int s = 0;
	    for(int d = 1;d*d <= v;d++){
            if(v % d == 0){
                if(d*d < v){
                    num += 2;
                    s += d;
                    s += v/d;
                }
                else num++;
            }
	    }
	    if(num != 4) s = 0;
        return s;
    }
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++)
            ans+=sod(nums[i]);
        return ans;
    }
};
