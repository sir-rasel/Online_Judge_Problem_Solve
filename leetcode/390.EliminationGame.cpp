class Solution {
public:
    int lastRemaining(int n) {
        stack<bool> st;
        while (n > 1) {
            n /= 2;
            st.push(true);
            if (n == 1) break;
            if (n % 2 == 0) st.push(false);
            else st.push(true);
            n /= 2;
        }

        int res = 1;
        while (!st.empty()) {
            if (st.top()) res = res * 2;
            else res = res * 2 - 1;
            st.pop();
        }

        return res;
    }
};
