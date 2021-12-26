class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m[26]={0};
        
        for(int i=0;i<magazine.length();i++) {
            m[magazine[i] - 'a']++;
        }
        
        for(int i=0;i<ransomNote.length();i++) {
            if(m[ransomNote[i]-'a'] <= 0) return false;
            m[ransomNote[i]-'a']--;
        }
        
        return true;
    }
};