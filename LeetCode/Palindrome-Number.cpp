// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
  bool isPalindrome(int x) {
    long long int copy = x, reverse = 0;
    while (x != 0) {
      long long int rem;
      rem = x % 10;
      reverse = reverse * 10 + rem;
      x /= 10;
    }
    bool check = false;
    if (reverse < 0) return check;
    else if (reverse == copy) {
      check = true;
      return check;
    }
    else return check;
  }
};
