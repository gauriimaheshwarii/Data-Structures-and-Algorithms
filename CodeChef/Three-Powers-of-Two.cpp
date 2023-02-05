// https://www.codechef.com/problems/THREEPOW2

#include <iostream>
using namespace std;

void solution() {
  int n, count = 0;
  cin >> n;
  string s;
  cin >> s;
  if (s == "1" || s == "10") {
    cout << "NO" << endl;
    return;
  }
  for (int i = 0; i < n; ++i) {
    if (s[i] == '1') ++count;
  }
  if (count <= 3) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solution();
  }
  return 0;
}
