class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int end = arr.size() - 1;
        vector<int> ans(end + 1);
        int rMax = -1;

        for (int i = end; i >= 0; i--){
            ans[i] = rMax;
            rMax = max(rMax, arr[i]);
        }

        return ans;
    }
};