class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
    int countA = 0, countB = 0;

    
    for (int i = 0; i < n / 2; ++i) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            ++countA;
    }

    
    for (int i = n / 2; i < n; ++i) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            ++countB;
    }

    return countA == countB;
    }
};
