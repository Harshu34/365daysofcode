class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int element = nums[i]*nums[i];
            nums[i] = element;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};