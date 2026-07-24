class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int end = arr.size() - 1;
        vector<int> ans(end + 1, -1);
        int rightMax = arr[end];
        int temp = 0;

        for (int i = end - 1; i >= 0; i--){
            if (rightMax > arr[i]){
                ans[i] = rightMax;
            } else {
                ans[i] = rightMax;
                rightMax = arr[i];
            }
        }

        return ans;
    }
};