// 未着手
#include <bits/stdc++.h>
using namespace std;

int main() {}

// 解説 by MMNMM
// #include <iostream>
// #include <vector>
// #include <limits>
// #include <bit>

// int main() {
//   using namespace std;

//   unsigned N;
//   unsigned long C;
//   cin >> N >> C;
//   vector<unsigned long> A(N), B(N);
//   for (auto &&a : A)
//     cin >> a;
//   for (auto &&b : B)
//     cin >> b;

//   vector<unsigned long> dp(1U << N, numeric_limits<unsigned long>::max() / 2);
//   dp[0] = -C; // はじめの 1 ブロックは分割のコストがかからないので -C しておく

//   const auto chmin{[](auto &&x, const auto &y) {
//     if (x > y)x = y;
//     return x;
//   }};

//   for (unsigned long S{}; S < 1U << N; ++S)
//     for (unsigned long B_front(popcount(S)), l{}; l < N; ++l)
//       for (unsigned long cost{C}, r{l}, i{B_front}; r < N; ++r, ++i) {
//         if ((S >> r) & 1) // 区間が重なったら終了
//           break;
//         cost += max(A[r], B[i]) - min(A[r], B[i]); // 区間のコストに |A[p[i]] - B[i]| を加える
//         chmin(dp[S | (1UL << r + 1) - (1UL << l)], dp[S] + cost); // コストを更新
//       }

//   cout << dp.back() << endl;
//   return 0;
// }
