class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int n = purchaseAmount;
        int rem = n%10;
        int num=n/10;
        int ans =0;

        if(rem>4 && rem<10)
        {
           ans = (num+1)*10;
        }

        else {
            ans = num*10;
        }

        return 100-ans;
    }
};