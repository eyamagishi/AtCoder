#include <bits/stdc++.h>
using namespace std;

const int MOD__ = 998244353;
int n, m, k;
long long cnt = 0;

long long loop() {
  return 0;
}

int main() {
  cin >> n >> m >> k;
  loop();

  cout << cnt % MOD__ << endl;
}

// F - Dice Sum 解説 by nok0
// #include <bits/stdc++.h>
// #include <atcoder/modint>

// using namespace std;
// using mint = atcoder::modint998244353;

// int main() {
//   int n, m, K;
//   cin >> n >> m >> K;

//   vector dp(n + 1, vector(K + 1, mint(0)));
//   dp[0][0] = 1;

//   for(int i = 0; i < n; i++) {
//     for(int j = 0; j < K; j++) {
//       for(int k = 1; k <= m; k++) {
//         if(j + k <= K) dp[i + 1][j + k] += dp[i][j];
//       }
//     }
//   }

//   mint res = 0;
//   for(int i = 1; i <= K; i++) {
//     res += dp.back()[i];
//   }

//   cout << res.val() << endl;
// }
