class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first=0,second=0;
        vector<int> nums;
        
        if(nums1.size()>=m+1) {
            nums1[m]=INT_MAX;
        }
        else {
            nums1.push_back(INT_MAX);
        }
        
        if(nums2.size()>=n+1) {
            nums2[n]=INT_MAX;
        }
        else {
            nums2.push_back(INT_MAX);
        }
        
        for(int i=0;i<m+n;i++) {
            
            if(nums1[first] < nums2[second]) {
                nums.push_back(nums1[first]);
                first++;
            }
            else {
                nums.push_back(nums2[second]);
                second++;
            }
            
        }
        nums1.clear();
        for(int i=0;i<m+n;i++) {
            nums1.push_back(nums[i]);
        }
    }
};