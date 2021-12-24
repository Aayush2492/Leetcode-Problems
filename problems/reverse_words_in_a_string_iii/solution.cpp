class Solution {
public:
    string reverseWords(string s) {
      
        string word;
        stringstream iss(s);
        string op;
        while (iss >> word) {
            
            int start = 0;
            int end = word.length()-1;
            while(start<end) {
                swap(word[start], word[end]);
                start++;
                end--;
            }
            op = op + word + " ";
            
        }
        op.pop_back();
        return op;
    }
};