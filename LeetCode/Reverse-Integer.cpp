// https://leetcode.com/problems/reverse-integer/

class Solution {
public:
  int reverse(int x) {
    long long remainder, copy = x, reversed = 0;
    while(copy) {
      remainder = copy % 10;
      reversed = (reversed * 10) + remainder;
      copy /= 10;
    }
    if (reversed > INT_MAX || reversed < INT_MIN) return 0;
    else return reversed;
  }
};
