class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        int a[2005];
        for(int i=0;i<2005;i++) a[i]=0;
        vector<int>ans;
        for(int i=0;i<arr1.size();i++) a[arr1[i]]++;
        for(int i=0;i<arr2.size();i++) a[arr2[i]]++;
        for(int i=0;i<arr3.size();i++) a[arr3[i]]++;
        for(int i=0;i<2005;i++)
            if(a[i]==3) ans.push_back(i);
        return ans;
    }
};
