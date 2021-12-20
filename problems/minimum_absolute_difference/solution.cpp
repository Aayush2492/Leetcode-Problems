#include <algorithm>
#include <map>
#include <limits.h>

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        vector<vector<int>> op;
        map<int,int> m;
        
        sort(arr.begin(), arr.end());
        
        long long int max1 = arr[arr.size()-1];
        long long int max2 = arr[arr.size()-2];
        long long int min1 = arr[0];
        long long int min2 = arr[1];
        long long int ab_df = LONG_LONG_MAX;
        
        for(int i=0;i<arr.size()-1;i++) {
            m.insert({arr[i], i});
            long long temp = arr[i+1]-arr[i];
            if(temp<ab_df)
                ab_df = temp;
        }
        m.insert({arr[arr.size()-1], arr.size()-1});
        for(int i=0;i<arr.size();i++) {
            
            auto itr = m.find(arr[i]+ab_df);
            if(itr != m.end()) {
                if(itr->second != i) {
                    vector<int> temp;
                    temp.push_back(std::min(arr[i], itr->first));
                    temp.push_back(std::max(arr[i], itr->first));
                    op.push_back(temp);
                }
            }
          
        }
        return op;
    }
};