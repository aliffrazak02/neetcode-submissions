class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int end = arr.size() - 1;
        for (int i = 0; i < end; i++){
            std::vector<int> subarray(arr.begin() + i + 1 , arr.end());
            arr[i] = max(subarray);
        }
        
        arr[end] = -1;

        return arr;
    }

    int max(vector<int>& arr){
        int max = 0;
        for (int num : arr){
            if (num > max){
                max = num;
            }
        }

        return max;
    }
};