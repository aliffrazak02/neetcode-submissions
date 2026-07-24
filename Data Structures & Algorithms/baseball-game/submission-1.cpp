class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for (const string& curr : operations){
            if (curr == "+"){
                record.push_back(record.back()+record[record.size()-2]);
            } else if (curr == "D"){
                record.push_back(record.back()*2);
            } else if (curr == "C"){
                record.pop_back();
            } else {
                record.push_back(stoi(curr));
            }
        }

        int sum = 0;
        for (int num: record){
            sum += num;
        }

        return sum;
    }
};