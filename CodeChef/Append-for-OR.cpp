// https://www.codechef.com/problems/APPENDOR

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, y;
    cin >> n >> y;
    bool flag = false;
    ll arr[n], OR = 0;
    for(int i = 0; i < n; ++i) {
      cin >> arr[i];
      OR = OR | arr[i];
    }
    for(int i = 0; i <= y; ++i) {
      if ((OR | i) == y) {
        cout << i << endl;
        flag = true;
        break;
      }
    }
    if (!flag) cout << -1 << endl;
  }
	return 0;
}