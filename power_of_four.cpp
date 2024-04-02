class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
        return false;
    }
    double logBase4 = log(n) / log(4);
    return logBase4 == floor(logBase4);
    }
};
