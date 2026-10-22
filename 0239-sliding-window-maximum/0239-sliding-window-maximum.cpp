
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d;
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            // Remove indices outside the window
            while (!d.empty() && d.front() <= i - k)
                d.pop_front();

            // Remove smaller elements from the back
            while (!d.empty() && nums[i] >= nums[d.back()])
                d.pop_back();

            d.push_back(i);

            // Start recording when the first window is complete
            if (i >= k - 1)
                ans.push_back(nums[d.front()]);
        }

        return ans;
    }
};
