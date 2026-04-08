class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int streak=0,maxi=0,n=nums.size();
        for (int i=0;i<n;i++) {
            if(nums[i]==1) {
                streak++;
                 maxi=max(maxi,streak);
            }
            else if (nums[i]==0) {
                streak=0;
                maxi=max(maxi,streak);
            } 
        }
        return maxi;
    }
};