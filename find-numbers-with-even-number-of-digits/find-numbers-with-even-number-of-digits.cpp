class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int outercount = 0;
        for(int i=0; i<nums.size(); i++){
            int innercount = 0;
            while(nums[i]!=0){
                innercount++;
                nums[i]/=10;
            }
            if(innercount%2==0){
                outercount++;
            }
        }
        return outercount;
    }
};