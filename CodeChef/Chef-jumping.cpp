// https://www.codechef.com/problems/OJUMPS

#include <iostream>
using namespace std;

int main() {
  long long a;
  cin >> a;
  if (a % 3 == 0 || (a - 1) % 6 == 0) cout << "yes" << endl;
  else cout << "no" << endl;
	return 0;
}