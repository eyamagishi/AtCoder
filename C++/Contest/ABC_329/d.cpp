// AC 37:39
// セグメント木
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int index = 0, max = 0;
  vector<int> C(n + 1, 0);
  for (int i = 1; i < m + 1; i++) {
    int a;
    cin >> a;
    C.at(a)++;
    if (max < C.at(a) || (max == C.at(a) && a < index)) {
      max = C.at(a);
      index = a;
    }
    cout << index << endl;
  }
}

// 解説 by cn449
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   int n, m;
//   cin >> n >> m;
//   vector<int> a(m);
//   for (int i = 0; i < m; i++) cin >> a[i];
//   vector<int> cnt(n + 1); // 各候補者の得票数
//   int ans = 0; // 現時点での当選者
//   for (int i = 0; i < m; i++) {
//     cnt[a[i]]++;
//     if (cnt[ans] < cnt[a[i]]) ans = a[i];
//     else if (cnt[ans] == cnt[a[i]]) ans = min(ans, a[i]);
//     cout << ans << endl;
//   }
// }
