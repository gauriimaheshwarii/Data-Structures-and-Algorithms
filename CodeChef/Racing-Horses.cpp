// https://www.codechef.com/problems/HORSES

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;
    int s[n];
    for(int i = 0; i < n; ++i) cin >> s[i];
    int diff, minimum = INT_MAX;
    sort(s, s+n);
    for(int i = 0; i < n - 1; ++i) {
      diff = s[i + 1] - s[i];
      minimum = min(minimum, diff);
    }
    cout << minimum << endl;
  }
	return 0;
}