class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;
    }
};
