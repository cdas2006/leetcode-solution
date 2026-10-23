class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        queue<int> q;
        int flips = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // Remove expired flips
            if (!q.empty() && q.front() < i) {
                q.pop();
            }

            // Check whether the current bit is effectively 0
            if (q.size() % 2 == nums[i]) {
                // Cannot perform a complete K-length flip
                if (i + k > n) {
                    return -1;
                }

                // Store the ending index of this flip
                q.push(i + k - 1);
                flips++;
            }
        }

        return flips;
    }
};