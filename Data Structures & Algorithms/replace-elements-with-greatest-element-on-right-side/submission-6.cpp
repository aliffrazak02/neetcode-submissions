class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int end = arr.size() - 1; 
        int rightMax = arr[end];
        int temp;
        for (int i = end - 1 ; i>=0 ; i--){
            if (arr[i] < rightMax){
                arr[i] = rightMax;
            } else {
                temp = rightMax;
                rightMax = arr[i];
                arr[i] = temp;
            }
        }
        arr[end] = -1;
        return arr;
    }
};