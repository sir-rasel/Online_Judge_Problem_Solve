class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int len = A.size()-1;
        for(int i = 0; i<len; i++){
            if(A[i]%2 == 1 )
            swap( A[i--], A[len--] );
        }
        return A;
    }
};
