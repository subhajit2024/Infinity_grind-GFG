class Solution {
 public:
  int sumOddLengthSubarrays(vector<int>& arr) {
    int ans = 0;
    
    int prevEvenSum = 0;
    int prevOddSum = 0;   

    for (int i = 0; i < arr.size(); ++i) {
      const int currEvenSum = prevOddSum + ((i + 1) / 2) * arr[i];
      const int currOddSum = prevEvenSum + (i / 2 + 1) * arr[i];
      ans += currOddSum;
      prevEvenSum = currEvenSum;
      prevOddSum = currOddSum;
    }

    return ans;
  }
};
