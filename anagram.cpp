class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        int num1 = a.length();
        int num2 = b.length();
        
        if(num1 != num2)
        {
            return false;
        }
        
        sort(a.begin(),a.end());
        
        sort(b.begin(),b.end());
        
        for(int i=0;i<num2;i++)
        
            if(a[i] != b[i])
            
                return false;
            
            
            return true;
            
            
        
        
    }

};
