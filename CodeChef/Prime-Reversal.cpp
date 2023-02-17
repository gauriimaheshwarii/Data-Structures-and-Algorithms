// https://www.codechef.com/problems/PRIMEREVERSE

#include <iostream>
using namespace std;

int main() {
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;
    int sumA = 0, sumB = 0;
    string a, b;
    cin >> a;
    cin >> b;
    for(int i = 0; i < n; ++i) {
      sumA += a[i];
      sumB += b[i];
    }
    if (sumA == sumB) cout << "YES" << endl; 
    else cout << "NO" << endl;
  }
	return 0;
}
