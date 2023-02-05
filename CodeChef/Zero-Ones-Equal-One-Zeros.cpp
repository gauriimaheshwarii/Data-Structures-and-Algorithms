// https://www.codechef.com/problems/ZOOZ

#include <iostream>
using namespace std;

void solution() {
  int n;
  cin >> n;
  string s = "";
  s += "0";
  for (int i = 0; i < n-2; ++i) {
    s += "1";
  }
  s += "0";
  cout << s << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solution();
  }
  return 0;
}
