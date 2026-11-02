class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
     sort(nums.begin(),nums.end());
     int n = nums.size();
     int mid = n/2;
     int ans = 0;

     for(int i=0;i<n;i++)
     {
        if(nums[i]<nums[mid])
        ans+=nums[mid]-nums[i];
        
        else if(nums[i]>nums[mid])
        ans+=nums[i]-nums[mid];
     }

     return ans;
        
    }
};