// https://leetcode.com/problems/minimum-moves-to-equal-array-elements/

class Solution {
public:
  int minMoves(vector<int>& nums) {
    int ans = 0;
    sort(nums.begin(), nums.end());
    int minimum = nums[0];
    for (int i = 0; i < nums.size(); ++i) {
      nums[i] -= minimum;
      ans += nums[i];
    }
    return ans;
  }
};
