// 未提出
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<char>> S(n, vector<char>(n));
  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      cin >> S.at(y).at(x);
    }
  }

  int cnt = 0;
  for (int y = 0; y < n; y++) {
    int x_tmp, y_tmp;
    bool flg = true;
    for (int x = 0; x < n; x++) {
      if (S.at(y).at(x) == 'x') continue;
      if (!flg) break;
      else {
        flg = false;
        x_tmp = x;
        y_tmp = y;
      }
    }
    if (!flg) continue;
  }
}
