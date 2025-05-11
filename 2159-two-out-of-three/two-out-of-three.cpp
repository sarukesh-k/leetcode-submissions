class Solution {
public:
    vector<int> calculateFrequencyCount(vector<int>& nums) {
        vector<int> count(101, 0); 
        for (int num : nums) {     
            count[num] = 1; 
        }
        return count;
    }

    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> countNums1 = calculateFrequencyCount(nums1); 
        vector<int> countNums2 = calculateFrequencyCount(nums2); 
        vector<int> countNums3 = calculateFrequencyCount(nums3); 

        vector<int> result; 

        for (int i = 1; i <= 100; ++i) {
            if (countNums1[i] + countNums2[i] + countNums3[i] > 1) {
                result.emplace_back(i);
            }
        }

        return result; 
    }
};