// 未提出
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int u[m], v[m], w[m];
  for (int i = 0; i < m; i++) cin >> u[m] >> v[m] >> w[m];

  return 0;
}

// 解説
// #include <iostream>
// #include <vector>
// #include <utility>
// #include <algorithm>
// #include <ranges>
// #include <numeric>

// int main() {
//   using namespace std;

//   unsigned N, M;
//   unsigned long K;
//   cin >> N >> M >> K;
//   vector<tuple<unsigned, unsigned, unsigned long>> edges(M);
//   for (auto&&[u, v, cost] : edges){
//     cin >> u >> v >> cost;
//     --u;
//     --v;
//   }

//   basic_string<bool> use_edges(M, false); // M 本の辺のうち
//   ranges::fill(use_edges | views::take(N - 1), true); // N - 1 本を使う
//   ranges::reverse(use_edges);

//   // 全域木になっているか判定するために Union-Find を使う
//   vector<unsigned> uf(N), sz(N, 1);
//   const auto find{[&uf](auto i) {
//     while (i != uf[i])i = uf[i] = uf[uf[i]];
//     return i;
//   }};
//   const auto unite{[&uf, &sz, find](auto i, auto j) -> bool {
//     i = find(i);
//     j = find(j);
//     if (i == j)return false;
//     if (sz[i] < sz[j])swap(i, j);
//     sz[i] += sz[j];
//     uf[j] = i;
//     return true;
//   }};

//   unsigned long ans{K};
//   const auto chmin{[](auto &&x, const auto &y) {
//     if (x > y)x = y;
//     return x;
//   }};

//   do
//     chmin(ans, [&] {
//       // Union-Find の初期化
//       iota(begin(uf), end(uf), 0U);
//       ranges::fill(sz, 1U);

//       unsigned long cost_sum{};
//       for (const auto i : views::iota(0U, M))
//         if (use_edges[i]) {
//           const auto&[u, v, cost]{edges[i]};
//           if (!unite(u, v)) // 閉路ができたら
//             return K; // 十分大きい値を返す
//           cost_sum += cost;
//         }
//       // 全域木なら
//       return cost_sum % K; // コストを返す
//     }());
//   while (ranges::next_permutation(use_edges).found);

//   cout << ans << endl;

//   return 0;
// }
