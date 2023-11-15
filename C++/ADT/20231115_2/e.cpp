// AC: 38:32
// 再帰処理
// 時間計算量の工夫
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> S(n);
  S.at(0) = "1";
  for (int i = 1; i < n; i++) {
    string str = " " + to_string(i + 1) + " ";
    S.at(i) = S.at(i - 1) + str + S.at(i - 1);
  }

  cout << S.at(n - 1) << endl;
}

// 解説 by Nyaan
// 以下の再帰処理でも解くことが可能
// 1. 再帰関数
// 2. メモ化再帰
// 3. 動的計画法