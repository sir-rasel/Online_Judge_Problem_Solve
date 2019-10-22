class Solution {
public:
    int lengthLongestPath(string input) {
        int maxlen = 0, i = 0, count = 0, level = 1;
        int len = input.size();
        bool isfile = false;

        unordered_map<int,int>levelLength;

        while(i<len){
            while(input[i]=='\t'){
                level++;
                i++;
            }

            while(i<len and input[i]!='\n'){
                if(input[i]=='.') isfile = true;

                count++;
                i++;
            }

            if(isfile) maxlen = max(maxlen,levelLength[level-1] + count);
            else levelLength[level] = levelLength[level-1] + count + 1;

            i++;
            count = 0;
            level = 1;
            isfile = false;
        }

        return maxlen;
    }
};
