#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<long> L(n);
  for (int i = 0; i < n; i++) cin >> L.at(i);
}

// G - Minimum Width 解説 by MMNMM
// #include <vector>
// #include <algorithm>
// #include <iostream>
// #include <ranges>
// #include <numeric>

// int main() {
//     using namespace std;

//     int N, M;
//     cin >> N >> M;
//     vector<long> L(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> L[i];
//         ++L[i]; // 先頭に空白をつけておく
//     }

//     long lower = ranges::max(L) - 1; // 答えは max L[i] 以上
//     long upper = reduce(begin(L), end(L)); // 答えは ∑ L[i] 以下

//     // 二分探索
//     while (lower + 1 < upper) {
//         long middle = (lower + upper) / 2;

//         int rows = 1; // 今の行数
//         long length = 0; // 先頭から何文字目か
//         for (int i = 0; i < N; ++i) {
//             length += L[i]; // 行の末尾に追加してみる
//             if (length > middle) { // はみ出たら
//                 ++rows; // 改行して
//                 length = L[i]; // 先頭に追加
//             }
//         }

//         if (rows > M) // 縦幅が足りていなければ
//             lower = middle; // 答えは middle より大きい
//         else // 足りていれば
//             upper = middle; // 答えは middle 以下
//     }

//     // 答えから 1 を引いて出力
//     cout << upper - 1 << endl;

//     return 0;
// }
