// https://www.codechef.com/problems/XYSTR

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int pairs = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length() - 1; ++i) {
      if (s[i] != s[i + 1]) {
        ++pairs;
        ++i;
      }
    }
    cout << pairs << endl;
  }
	return 0;
}