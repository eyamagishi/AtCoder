// AC 33:53
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) cin >> A.at(i);

  sort(A.begin(), A.end());
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (i + 1 < n && (A.at(i) == A.at(i + 1))) continue;
    cnt++;
  }

  cout << cnt << endl;
}

// D - Count Distinct Integers 解説 by KoD
// 解法1
// a に現れる整数を順番に見ていき、「それが初めて登場した整数なら答えに 1 を足す」ことを繰り返す。

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   for (int& x : a) {
//     cin >> x;
//   }
//   int ans = 0;
//   for (int i = 0; i < n; ++i) {
//     bool appeared = false;
//     for (int j = 0; j < i; ++j) {
//       if (a[i] == a[j]) {
//         appeared = true;
//       }
//     }
//     if (!appeared) {
//       ans += 1;
//     }
//   }
//   cout << ans << '\n';
// }


// 解法2
// 集合を管理するデータ構造を用いて解くことができる。
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   set<int> a;
//   for (int i = 0; i < n; ++i) {
//     int x;
//     cin >> x;
//     a.insert(x);
//   }
//   cout << a.size() << '\n';
// }


// 解法3
// a を昇順に並べ替えると、等しい要素は隣り合わせになります。 並べ替えた後の数列において、
// a(i) !=a(i+1​) となる i の個数に 1 を足した値が答えとなります。
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <iterator>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   for (int& x : a) {
//     cin >> x;
//   }
//   sort(begin(a), end(a));
//   int ans = 1;
//   for (int i = 0; i < n - 1; ++i) {
//     if (a[i] != a[i + 1]) {
//       ans += 1;
//     }
//   }
//   cout << ans << '\n';
// }
