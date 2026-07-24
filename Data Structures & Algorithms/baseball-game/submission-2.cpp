class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        
        int sum = 0;
        
        for (const string& curr : operations){
            if (curr == "+"){
                record.push_back(record.back()+record[record.size()-2]);
                sum += record.back();
            } else if (curr == "D"){
                record.push_back(record.back()*2);
                sum += record.back();
            } else if (curr == "C"){
                sum -= record.back();
                record.pop_back();
            } else {
                record.push_back(stoi(curr));
                sum += record.back();
            }
        }

        return sum;
    }
};