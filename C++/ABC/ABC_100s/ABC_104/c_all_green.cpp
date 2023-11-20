// bit全探索
// DP
// bit DP
#include <bits/stdc++.h>
using namespace std;

int main() {}

// 解説 by hamayanhamayan
// #include <bits/stdc++.h>
// using namespace std;

// int D, G, P[10], C[10];
// int dp[11][401010];
// //---------------------------------------------------------------------------------------------------
// int main() {
//   int d, g;
//   cin >> d >> g;
//   int P[d], C[d];
//   for (int i = 0; i < D; i++) cin >> P[i] >> C[i];

//   G /= 100;
//   rep(i, 0, D) C[i] /= 100;

//   rep(i, 0, D + 1) rep(point, 0, 201010) dp[i][point] = inf;
//   dp[0][0] = 0;

//   rep(i, 0, D) rep(point, 0, 201010) {
//       rep(j, 0, P[i]) chmin(dp[i + 1][point + (i + 1)*j], dp[i][point] + j);
//       chmin(dp[i + 1][point + (i + 1)*P[i] + C[i]], dp[i][point] + P[i]);
//   }

//   int ans = inf;
//   rep(point, G, 201010) chmin(ans, dp[D][point]);
//   cout << ans << endl;
// }
