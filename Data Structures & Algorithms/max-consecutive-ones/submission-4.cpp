class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = -1;
        int counter = 0;
        for (int num : nums){
            if (num == 1){
                counter++;
            } else {
                counter = 0;
            }

            if (counter > res){
                res = counter;
            }
        }
        return res;
    }
};