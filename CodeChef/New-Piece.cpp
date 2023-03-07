// https://www.codechef.com/problems/NEWPIECE

#include <iostream>
using namespace std;

int main() {
  int t, a, b, p, q;
  cin >> t;
  while(t--) {
    cin  >> a >> b >> p >> q;
    if ((a == p) && (b == q)) cout << "0" << "\n";
    else if ((a + b) % 2 != (p + q) % 2) cout << "1" << "\n";
    else cout << "2" << "\n";
  }
	return 0;
}