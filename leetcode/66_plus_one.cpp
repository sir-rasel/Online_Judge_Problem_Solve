class Solution {
public:
     vector<int> plusOne(vector<int>& digits) {
        int carry  = 1;
        for(int i=digits.size()-1;i>=0;i--){
            int ele = (digits[i]+carry)%10;
            carry = (digits[i]+carry)/10;
            digits[i] = ele;
        }
        if(carry) digits.insert(begin(digits),1);
        return digits;
    }
};
