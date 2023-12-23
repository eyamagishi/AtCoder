// TLE(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) cin >> A.at(i);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if(max(A.at(i), A.at(j)) == j + 1 && min(A.at(i), A.at(j)) == i + 1 && A.at(j) <= n) {
        sum++;
      }
    }
  }

  cout << sum << endl;
}

// 解説 by KoD
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   int same = 0;
//   for (int i = 0; i < n; ++i) {
//     cin >> a[i];
//     a[i] -= 1;
//     if (a[i] == i) {
//       same += 1;
//     }
//   }
//   long long ans = (long long)same * (same - 1) / 2;
//   for (int i = 0; i < n; ++i) {
//     if (a[i] > i and a[a[i]] == i) {
//       ans += 1;
//     }
//   }
//   cout << ans << endl;
//   return 0;
// }
