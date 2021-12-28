class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.length() < s1.length()) return false;
        vector<int> freq(26, 0);
        vector<int> back(26, 0);
        for(int i=0;i<s1.length();i++) {
            freq[s1[i] - 'a']++;
            back[s2[i] - 'a']++;
        }
        
        int start =0,end=s1.length()-1;
        while(end < s2.length()) {
            if(freq == back) return true;
            else {
                start++;end++;
                back[s2[start-1] - 'a']--;
                if(end < s2.length()) back[s2[end]-'a']++;
            }
        }
        return false;
    }
};