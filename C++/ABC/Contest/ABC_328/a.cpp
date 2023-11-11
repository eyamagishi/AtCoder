// AC: 3:31
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    if(s[i] <= x) sum += s[i];
  }

  cout << sum << endl;
}

// 解説　 y leaf1415
// #include <iostream>
// using namespace std;

// int main() {
//   int n, x, s[8];
//   cin >> n >> x;
//   for(int i = 0; i < n; i++) cin >> s[i];

//   int ans = 0;
//   for(int i = 0; i < n; i++) if(s[i] <= x) ans += s[i];
//   cout << ans << endl;

//   return 0;
// }
