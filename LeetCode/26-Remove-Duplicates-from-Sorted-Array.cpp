// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
  set<int> s; 
    for(int i = 0; i < nums.size(); ++i) s.insert(nums[i]);
    int answer = s.size();
    nums.clear();
    for(auto i : s) nums.push_back(i);
    return answer;
  }
};

/*
ALTERNATIVE

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    map<int, int> mp;
    for(int i = 0; i < nums.size(); ++i) ++mp[nums[i]];
    int index = 0;
    for(auto i : mp) {
      nums[index] = i.first;
      ++index;
    }
    return index;
  }
};
*/
