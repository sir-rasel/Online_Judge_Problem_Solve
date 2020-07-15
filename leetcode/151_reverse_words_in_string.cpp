class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        stack<string> temp;

        string k;
        while (ss>>k)
            temp.push(k);

        string ans;
        bool first = true;
        while (!temp.empty()) {
            if (!first) ans += ' ';
            first = false;
            ans += temp.top();
            temp.pop();
        }

        return ans;
    }
};
