// 未着手
// 分からない
#include <bits/stdc++.h>
using namespace std;

int main() {}

// 解説 by yuto1115
// #include<bits/stdc++.h>
// #include<atcoder/modint>

// using namespace std;
// using namespace atcoder;

// using mint = modint998244353;

// vector<vector<int>> par;
// vector<int> dep;

// void lca_init() {
//   int n = par[0].size();
//   for (int k = 0; k < 19; k++) {
//     for (int i = 0; i < n; i++) {
//       if (par[k][i] == -1) continue;
//       par[k + 1][i] = par[k][par[k][i]];
//     }
//   }
//   dep.resize(n);
//   for (int i = 1; i < n; i++) {
//     dep[i] = dep[par[0][i]] + 1;
//   }
// }

// int la(int u, int d) {
//   for (int k = 0; k < 20; k++) {
//     if (d >> k & 1) u = par[k][u];
//   }
//   return u;
// }

// int lca(int u, int v) {
//   if (dep[u] > dep[v]) swap(u, v);
//   v = la(v, dep[v] - dep[u]);
//   if (u == v) return u;
//   for (int k = 19; k >= 0; k--) {
//     if (par[k][u] != par[k][v]) {
//       u = par[k][u];
//       v = par[k][v];
//     }
//   }
//   return par[0][u];
// }

// int main() {
//   int n, m, k;
//   cin >> n >> m >> k;
//   vector<vector<int>> ch(n);
//   par = vector(20, vector<int>(n, -1));
//   for (int i = 1; i < n; i++) {
//     int p;
//     cin >> p;
//     ch[--p].push_back(i);
//     par[0][i] = p;
//   }
//   lca_init();
//   vector in(n, vector<int>(3)); // 0 : left child  1 : right child  2 : parent
//   vector out(n, vector<int>(3));
//   vector<int> first(n, -1);
//   for (int i = 0; i < m; i++) {
//     int s, t;
//     cin >> s >> t;
//     --s, --t;
//     int l = lca(s, t);
//     int cs = -1, ct = -1;
//     if (l != s) {
//       int now = la(s, dep[s] - dep[l] - 1);
//       for (int j = 0; j < (int) ch[l].size(); j++) {
//         if (ch[l][j] == now) cs = j;
//       }
//     }
//     if (l != t) {
//       int now = la(t, dep[t] - dep[l] - 1);
//       for (int j = 0; j < (int) ch[l].size(); j++) {
//         if (ch[l][j] == now) ct = j;
//       }
//     }
//     if (l == s) {
//       ++in[s][ct];
//       ++out[t][2];
//     } else if (l == t) {
//       ++in[s][2];
//       ++out[t][cs];
//     } else {
//       ++in[s][2];
//       ++out[t][2];
//       if (first[l] == ct) {
//         cout << 0 << endl;
//         return 0;
//       }
//       first[l] = cs;
//     }
//   }
//   vector dp(n, vector<pair<int, mint>>(k + 1));
//   vector seen(n, vector<bool>(k + 1));
//   auto f = [&](auto &f, int i, int j) -> pair<int, mint> {
//     if (seen[i][j]) return dp[i][j];
//     seen[i][j] = true;
//     dp[i][j] = {-1, 0};
//     vector<int> ord(ch[i].size());
//     iota(ord.begin(), ord.end(), 0);
//     do {
//       if (!ord.empty() and first[i] == 1 - ord[0]) continue;
//       int nj = j;
//       mint now = 1;
//       nj -= out[i][2];
//       for (int c: ord) {
//         nj += in[i][c];
//         if (nj > k) {
//           nj = -1;
//           break;
//         }
//         mint m;
//         tie(nj, m) = f(f, ch[i][c], nj);
//         if (nj == -1) break;
//         now *= m;
//         nj -= out[i][c];
//       }
//       if (nj == -1) continue;
//       nj += in[i][2];
//       if (nj > k) continue;
//       dp[i][j].first = nj;
//       dp[i][j].second += now;
//     } while (next_permutation(ord.begin(), ord.end()));
//     return dp[i][j];
//   };
//   cout << f(f, 0, 0).second.val() << endl;
// }
