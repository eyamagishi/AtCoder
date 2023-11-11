// (2) TLE, RE
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  string s;
  cin >> n >> q >> s;
  int l[q], r[q];
  for (int i = 0; i < q; i++) cin >> l[i] >> r[i];


  for (int i = 0; i < q; i++) {
    int sum = 0;
    for (int j = l[i] - 1; j < r[i] - 1; j++) {
      if (s[j] == s[j + 1]) sum++;
    }
    cout << sum << endl;
  }
}

// 解説 by leaf1415
// #include <iostream>
// using namespace std;

// int n, q;
// char s[300001];
// int a[300000], b[300000];

// int main() {
//   cin >> n >> q;
//   for (int i = 1; i <= n; i++) cin >> s[i];

//   for (int i = 1; i <= n-1; i++) if(s[i] == s[i+1]) a[i] = 1;
//   for (int i = 1; i <= n-1; i++) b[i] = b[i-1] + a[i];

//   int l, r;
//   for (int i = 1; i <= q; i++){
//     cin >> l >> r;
//     cout << b[r-1]-b[l-1] << endl;
//   }

//   return 0;
// }
