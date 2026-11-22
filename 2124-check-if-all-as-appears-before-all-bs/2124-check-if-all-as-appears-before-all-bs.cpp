class Solution {
public:
    bool checkString(string s) {
        
        int n= s.size();
        int i=0;
        while(s[i]!='b' && i<n)
        {
            i++;  
        }

        while(i<n)
        {
            if(s[i]=='a')
            return false;
            i++;
        }

        return true;
    }
};