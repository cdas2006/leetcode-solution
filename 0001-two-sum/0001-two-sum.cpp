class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // without hashmap in brute force
       vector<int>ans;
       int n=nums.size();
       for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if (nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }

       }
       return ans;

    }
};