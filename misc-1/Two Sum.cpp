class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans;
        for(auto it = 0; it < size; ++it){
            for(auto it2 = it; it2 < size; ++it2){
                if(nums[it] + nums[it2] == target && it != it2){
                    ans.push_back(it);
                    ans.push_back(it2);
                }
            }
        }
    return ans;
    }
};
