
#include <bits/stdc++.h> 
using namespace std; 

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string result = "";
    result += S[0]; 
    
    for (int i = 1; i < S.length(); ++i) {
        if (S[i] != S[i - 1]) {
            result += S[i]; 
        }
    }
    
    return result;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 

