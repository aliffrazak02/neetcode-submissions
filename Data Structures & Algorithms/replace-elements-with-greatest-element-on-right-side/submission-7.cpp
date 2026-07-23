class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int end = arr.size();
        int rightMax = -1;
        vector<int> ans(end);

        for (int i = end - 1; i >= 0 ; --i){
            ans[i] = rightMax;
            rightMax = max(arr[i], rightMax);
        }

        return ans;

    }
};