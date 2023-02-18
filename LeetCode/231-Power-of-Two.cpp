// https://leetcode.com/problems/power-of-two/

class Solution {
public:
  bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    else if (n == 1) return true;
    else {
      int remainder;
      while (n > 1) {
        remainder = n % 2;
        n /= 2;
        if (remainder != 0) return false;
      }
      return true;
    }
  }
};
