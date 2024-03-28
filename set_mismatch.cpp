class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         int n = nums.size();
        long long expected_sum = n * (n + 1LL) / 2LL;
        long long expected_sum_of_squares = n * (n + 1LL) * (2LL * n + 1LL) / 6LL;

        long long actual_sum = 0;
        long long actual_sum_of_squares = 0;

        for (int num : nums) {
            actual_sum += num;
            actual_sum_of_squares += (long long)num * num;
        }

        long long diff_sum = expected_sum - actual_sum;
        long long diff_sum_of_squares = expected_sum_of_squares - actual_sum_of_squares;

        int duplicate = (diff_sum_of_squares / diff_sum - diff_sum) / 2;

        int missing = duplicate + diff_sum;

        return {duplicate, missing};
    }
};
