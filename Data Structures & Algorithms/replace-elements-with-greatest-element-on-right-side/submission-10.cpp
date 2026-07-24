class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int end = arr.size() - 1;
        for (int i = 0; i < end; i++){
            std::vector<int> subarray(arr.begin() + i + 1,arr.end());
            arr[i] = rMax(subarray);
        }
        arr[end] = -1;
        return arr;
    }

    int rMax(vector<int>& arr){
        int ret = -1;
        for (int num:arr){
            if (num > ret) ret = num;
        }

        return ret;
    }

};