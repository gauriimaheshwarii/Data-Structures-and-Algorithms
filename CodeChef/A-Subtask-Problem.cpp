// https://www.codechef.com/problems/SUBTASK

#include <iostream>
using namespace std;

int main() {
  int t, n, m, k;
  cin >> t;
  while(t--) {
    cin >> n >> m >> k;
    int arr[n], countN = 0, flag = 1;
    for(int i = 0; i < n; ++i) {
      cin >> arr[i];
      if (arr[i] == 1) ++countN;
      if (i < m) {
        if (arr[i] == 0) flag = 0;
      }
    }
    if ((n == countN) && (flag = 1)) cout << "100" << endl;
    else if ((n != countN) && (flag == 1)) cout << k << endl;
    else cout << 0 << endl;
  }
	return 0;
}