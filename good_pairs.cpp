class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int result = 0;
        
        for (int num : nums) {
            count[num]++;
        }
        
        for (auto& pair : count) {
            int numCount = pair.second;
            result += numCount * (numCount - 1) / 2;
        }
        
        return result;
    }
};
