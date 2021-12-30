class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) return -1;  
        int n = 0, ans = 0;
        bool *hit = new bool[k];     
        for (int i = 0; i < k; i ++) hit[i] = false;
        while (true) { 
            ++ ans;
            n = (n * 10 + 1) % k;
            if (n == 0) return ans; 
            if (hit[n]) return -1;
            hit[n] = true;
        }
    }
};