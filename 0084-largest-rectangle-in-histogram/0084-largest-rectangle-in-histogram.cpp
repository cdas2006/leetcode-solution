class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int ans=0;
        stack<int> st;
        // next smallest left
        vector<int> left(n, 0);
        // next smallest right
        vector<int> right(n, 0);

        // find next smalest right
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                right[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }

        // now empty the stack because the smallest right not found till end

        while (!st.empty()) {
            right[st.top()] = n;
            st.pop();
        }

        // find next smallest left

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                left[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }

        while (!st.empty()) {
            left[st.top()] = -1;
            st.pop();
        }

        // calculate area

        for(int i=0;i<n;i++)
        {
            ans = max(ans,heights[i]*(right[i]-left[i]-1));
        }

        return ans;
    }
};