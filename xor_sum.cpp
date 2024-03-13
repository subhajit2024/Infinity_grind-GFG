class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int total_xor = 0;
        
        for (int i = 0; i < (1 << n); ++i) { 
            int xor_val = 0;
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) {
                    xor_val ^= nums[j]; 
                }
            }
            total_xor += xor_val;       
            }
        
        return total_xor;
    }
};
