// https://www.codechef.com/problems/TWORANGES

#include <iostream>
#include <set>
using namespace std;

int main() {
  int t, a, b, c, d;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c >> d;
    set<int> st;
    for (int i = a; i <= b; ++i) {
      st.insert(i);
    }
    for (int i = c; i <= d; ++i) {
      st.insert(i);
    }
    int ans = st.size();
    cout << ans << endl;
  }
	return 0;
}
