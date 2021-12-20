#include <map>

class Solution {
public:
    int romanToInt(string s) {
        
        std::map<char, int> m;
        m.insert({'I', 1});
        m.insert({'V', 5});
        m.insert({'X', 10});
        m.insert({'L', 50});
        m.insert({'C', 100});
        m.insert({'D', 500});
        m.insert({'M', 1000});
        
        int sum=0;
        for(int i=0;i<=s.length()-1;) {
            auto curr = m.find(s[i]);
            if(i != s.length()-1) {
        
                auto nxt = m.find(s[i+1]);
                if( curr->second < nxt->second) {
                    sum = sum + nxt->second - curr->second;
                    i+=2;
                }
                else {
                    sum = sum + curr->second;
                    i++;
                }
            }
            else {
                sum = sum + curr->second;
                i++;
            }
        }
        return sum;
    }
};