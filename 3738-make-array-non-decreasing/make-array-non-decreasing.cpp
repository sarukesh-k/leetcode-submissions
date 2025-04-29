class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int len = 0;
        int n = nums.size();
        int mx = INT_MIN;
        int i = 0;
        while(i<n){
            if(nums[i]>=mx){
                mx=nums[i];
                len++;
            }
            i++;
        }
        return len;
    }
};