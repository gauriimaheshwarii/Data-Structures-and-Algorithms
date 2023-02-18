// https://leetcode.com/problems/the-kth-factor-of-n/

class Solution {
public:
  int kthFactor(int n, int k) {
    int index = 0, arr[(n/2) + 1];
    for(int i = 1; i <= (n/2); ++i) {
      if (n % i == 0) {
        arr[index] = i;
        ++index;
      }
    }
    arr[index++] = n;
    if (k > index) return -1;
    else return arr[k-1];
  }
};
