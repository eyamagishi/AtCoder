// AC(2)
#include <bits/stdc++.h>
using namespace std;

int h, w;

void dfs(vector<vector<char>> &c, vector<vector<bool>> &checked, int y, int x) {
  if (y < 0 || h <= y || x < 0 || w <= x || c.at(y).at(x) == '#') return;
  if (checked.at(y).at(x) == true) return;

  checked.at(y).at(x) = true;
  if (c.at(y).at(x) == 'g') return;

  dfs(c, checked, y - 1, x);
  dfs(c, checked, y + 1, x);
  dfs(c, checked, y, x - 1);
  dfs(c, checked, y, x + 1);

  return;
}

int main() {
  cin >> h >> w;
  vector<vector<char>> c(h, vector<char> (w));
  for (int y = 0; y < h; y++) for (int x = 0; x < w; x++) cin >> c.at(y).at(x);

  vector<vector<bool>> checked(h, vector<bool> (w, false));
  for (int y = 0; y < h; y++) for (int x = 0; x < w; x++) {
    if(c.at(y).at(x) == 's') {
      dfs(c, checked, y, x);
      break;
    }
  }

  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      if (c.at(y).at(x) == 'g') {
        if (checked.at(y).at(x)) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
      }
    }
  }
}