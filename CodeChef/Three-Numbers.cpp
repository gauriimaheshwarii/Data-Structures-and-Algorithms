// https://www.codechef.com/problems/THREENUMBERS

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int answer, arr[3];
    for(int i = 0; i <= 2; ++i) cin >> arr[i];
    sort(arr, arr + 3);
    if((arr[0] % 2 == 0 && arr[1] % 2 == 0 && arr[2] % 2 == 0) || (arr[0] % 2 == 1 && arr[1] % 2 == 1 && arr[2] % 2 == 1)) {
      answer = ((arr[2] - arr[0]) / 2) + ((arr[1] - arr[0]) / 2);
      cout << answer << endl;
    }
    else cout << -1 << endl;
  }
	return 0;
}