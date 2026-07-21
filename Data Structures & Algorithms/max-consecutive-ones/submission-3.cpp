class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, cnt = 0;
        for (int num : nums){
            num == 1 ? cnt++ : cnt = 0;
            res = max(res,cnt);
        }
        return res;
    }
};