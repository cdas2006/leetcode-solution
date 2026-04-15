class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int start=0,end=m*n-1;
        while (start<=end) {
           int mid= start+(end-start)/2;
           int ri=mid/n;
           int ci=mid%n;
            if (matrix[ri][ci]==target) return true;
            else if(matrix[ri][ci]<target) start=mid+1;
            else end=mid-1;
        }
        return 0;
        
    }
};