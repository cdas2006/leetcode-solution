class Solution {
public:
    int sumofsquares(int n)
    {
        int ans = 0,rem;
        
        while(n)
        {
            rem = n%10;
            n/=10;
            ans += rem*rem;
        }

        return ans;
    };

    bool isHappy(int n) {
        
        if(n==1)
        return true;
        
        int num,rem;

        while(n>4)
        {
            n = sumofsquares(n);
        }

        if(n==1)
        return true;
        else
        return false;
    }
};