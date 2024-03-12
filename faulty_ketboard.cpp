class Solution {
public:
    string finalString(string s) {
        string result;
        bool reverseMode = false;
        for (char c : s) {
        if (c == 'i') {
            reverseMode = !reverseMode; 
        } else {
            if (reverseMode) {
                result = c + result; 
            } else {
                result += c; 
            }
        }
    }
    
    if (reverseMode) {
        reverse(result.begin(), result.end());
    }
    
    return result;
    }
};
