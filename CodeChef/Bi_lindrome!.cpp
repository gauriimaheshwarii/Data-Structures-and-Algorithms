// https://www.codechef.com/problems/QTOO_2523

#include <iostream>
#include <map>
using namespace std;

int main() {
  int t, n, i;
  cin >> t;
  while(t--) {
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for(i = 0; i < n; ++i) {
      ++mp[s[i]];
      if (mp[s[i]] > 1) {
        cout << n - 2 << endl;
        break;
      }
    }
    if (i == n) cout << "-1" << endl;
  }
	return 0;
}
