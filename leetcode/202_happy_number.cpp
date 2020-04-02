class Solution {
    map<int,bool>check;

    long long int digitSquareSum(long long int n){
        long long int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        bool flag=false;
        long long int ans = n;
        while(!flag){
            ans = digitSquareSum(ans);
            if(check.count(ans)==0){
                check[ans]=true;
            }
            else if(ans==1) flag=true;
            else break;
        }
        return flag;
    }
};
