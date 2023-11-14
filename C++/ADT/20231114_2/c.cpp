// AC: 16:24
// 基本的な全探索, 愚直にシミュレーション
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int A[n], B[m];
  for (int i = 0; i < n; i++) cin >> A[i];
  for (int i = 0; i < m; i++) cin >> B[i];

  for (int i = 0; i < m; i++) {
    bool flg = false;
    for (int j = 0; j < n; j++) {
      if (flg) continue;
      if (B[i] == A[j]) {
        A[j] = 0;
        flg = true;
      }
    }
    if (!flg) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}

// 解説 by mechanicalpenciI
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n, m;
//   int a[1000];
//   int b;
//   bool used[1000];
//   bool found,success;

//   cin >> n >> m;
//   for (int i = 0; i < n; i++) {
//     cin >> a[i];
//     used[i] = false;
//   }

//   success = true;
//   for (int i = 0; i < m; i++) {
//     cin >> b;
//     found = false;

//     for (int j = 0; j < n; j++) {
//       if ((a[j] == b)&&(!used[j])) {
//         used[j] = true;
//         found = true;
//         break;
//       }
//     }

//     if (!found)success = false;
//   }
//   if (success)cout << "Yes" << endl;
//   else cout << "No" << endl;
//   return 0;
// }
