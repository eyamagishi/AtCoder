// AC 10:17
// 2番目を保存しておく
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int A[n];
  for (int i = 0; i < n; i++) cin >> A[i];

  int max = 0, max_next = 0;
  for (int i = 0; i < n; i++) {
    if (max < A[i]) {
      max_next = max;
      max = A[i];
    } else if (max != A[i] && max_next < A[i]) max_next = A[i];
  }

  cout << max_next << endl;
}

// 解説 by cn449
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   for (int i = 0; i < n; i++) cin >> a[i];
//   int m = *max_element(a.begin(), a.end());
//   int ans = 0;
//   for (int e : a) if (e != m) ans = max(ans, e);
//   cout << ans << endl;
// }
