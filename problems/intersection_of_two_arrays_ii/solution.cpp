class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
        
        vector<int>& smaller = (num1.size() > num2.size())? num2:num1;
        vector<int>& bigger = (num1.size() > num2.size())? num1:num2;
        
        unordered_map<int, int> m;
        vector<int> op;
        
        for(int i=0;i<bigger.size();i++) {
            m[bigger[i]]++;
        }
        
        for(int i=0;i<smaller.size();i++) {
            
            if(m.find(smaller[i]) != m.end()) {
                if(m[smaller[i]]-- >= 1) {
                    op.push_back(smaller[i]);
                }
            }
        }
        return op;
        
    }
};