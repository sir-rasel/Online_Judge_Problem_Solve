class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto i:nums)
            ans^=i;

        int x;
        for(int i=0;i<32;i++)
            if(ans & (1<<i)){
                x=i;
                break;
            }

        int a=0,b=0;
        for(auto i:nums){
            if(i & (1<<x)) a^=i;
            else b^=i;
        }

        return {a,b};
    }
};
