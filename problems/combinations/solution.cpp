class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        if(n==k) {
            vector<vector<int>> ans;
            vector<int> subans;
           for(int i=0;i<n;i++) {
               subans.push_back(i+1);
            }
            ans.push_back(subans);            
            return ans;
        }
        
        if(k==1) {
            vector<vector<int>> ans;
           for(int i=0;i<n;i++) {
               vector<int> subans{i+1};
               ans.push_back(subans);
            }           
            return ans;
        }
        
        vector<vector<int>> ans1 = combine(n-1, k);
        vector<vector<int>> ans2 = combine(n-1, k-1);
        
        for(int i=0;i<ans2.size();i++) {
            ans2[i].push_back(n);
        }
        
        for(int i=0;i<ans1.size();i++) {
            ans2.push_back(ans1[i]);
        }
        
        // vector<vector<int>>().swap(ans1);
        ans1.clear();
        ans1.shrink_to_fit();
        
        return ans2;
    }
};