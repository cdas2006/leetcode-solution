class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int max = nums[0];

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>max)
            max=nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {
            ans+=max-nums[i];
        }

        return ans;
    }
};