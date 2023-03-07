// https://www.codechef.com/problems/LONGSEQ

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    string d;
    cin >> d;
    int count0 = 0, count1 = 0;
    for(int i = 0; i < d.length(); ++i) {
      if (d[i] == '0') ++count0;
      else ++count1;
    }
    if (count0 == 1 || count1 == 1) cout << "Yes" << "\n";
    else cout << "No" << "\n";
  }
	return 0;
}