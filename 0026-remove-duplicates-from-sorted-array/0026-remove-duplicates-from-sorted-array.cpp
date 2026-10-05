class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // vector<int>num;
        // num[0]=nums[0];

        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]!=nums[i-1])
        //     num.push_back(nums[i]);
        // }
        // return num;

        int i=0;
        int j=1;

        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;
    }
};