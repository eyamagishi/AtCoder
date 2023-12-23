// AC(1) 89:37
// 適切な範囲での全探索
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   long d;
//   cin >> d;

//   long ans = d;
//   for (long x = 0; 2 * x * x <= d; x++) {
//     for (long y = sqrt(d - x * x); y * y <= d; y++) {
//       long tmp = x * x + y * y - d;
//       if (abs(tmp) < ans) ans = abs(tmp);
//       else if (0 < tmp) break;
//     }
//   }

//   cout << ans << endl;
// }

// C - Minimize Abs 2 解説 by nok0
// 0 <= x < ⌈√D⌉ までの範囲で C = x^2 − D と置いたときの |y^2 + C| を最小化する問題
// C が非負の場合は y = 0 が最適、
// C が負の場合は y = ⌊√C⌋、y = ⌈√-C⌉ のどちらかになる。
// x を固定したときの答えが O(1) となるため x として考える値の種類数は O(√D)で解くことができる。

// 回答例 自作
#include <bits/stdc++.h>
using namespace std;

int main() {
  long d;
  cin >> d;

  long ans = d;
  for (long x = 0; x * x <= d; x++) {
    long c = x * x - d;
    if (0 <= c) ans = min(ans, (c));
    else {
      long c_abs = -c;
      long low_y = sqrt(c_abs) + c;
      long high_y = sqrt(c_abs) + c + 1;
      ans = min(ans, min(abs(low_y), abs(high_y)));
    }
  }

  cout << ans << endl;
}