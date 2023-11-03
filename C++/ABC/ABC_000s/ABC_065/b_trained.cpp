#include <bits/stdc++.h>
using namespace std;
const int MAX__ = 101010;

// 1-index での実装
int main() {
  int n;
  cin >> n;
  vector<int> A(n + 1);
  for(int i = 1;i < n + 1;i++) {cin >> A[i];}

  int cur = 1;
  for(int i = 1;i < MAX__;i++) {
    cur = A[cur];
    if(cur == 2) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}