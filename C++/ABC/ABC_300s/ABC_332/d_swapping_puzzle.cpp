// 未提出
#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

bool checked_grid(vector<vector<int>> &a, vector<vector<int>> &b){
  return true;
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w));
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) cin >> a.at(y).at(x);
  }
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) cin >> b.at(y).at(x);
  }

  for (int y = 0; y < h - 1; y++) {
    for (int x = 0; x < w; x++) {
      if (a.at(y).at(x - 1) == b.at(y).at(x)) continue;

    }
  }
}
