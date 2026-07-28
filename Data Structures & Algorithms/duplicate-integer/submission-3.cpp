class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //brute force
        int end = nums.size();

        for (int i = 0; i<end - 1; i++){
            for (int j = 1 + i; j<end; j++){
                if (nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};