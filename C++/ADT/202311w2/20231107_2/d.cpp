// time over
#include <bits/stdc++.h>
using namespace std;

int r, c;

void boom(vector<vector<char>> &b, int manhattan, int y, int x) {
  // cout << endl << y << ' ' << x << endl;
  if (b.at(y).at(x) == '#') b.at(y).at(x) = '.';
  if (0 < manhattan) {
    manhattan--;
    if (0 <= y - 1) boom(b, manhattan, y - 1, x);
    if (y + 1 < r) boom(b, manhattan, y + 1, x);
    if (0 <= x - 1) boom(b, manhattan, y, x - 1);
    if (x + 1 < c) boom(b, manhattan, y, x + 1);
  }
  return;
}

int main() {
  cin >> r >> c;
  vector<vector<char>> b(r, vector<char>(c));
  for (int y = 0; y < r; y++) {
    for (int x = 0; x < c; x++) {
      cin >> b.at(y).at(x);
    }
  }
  for (int y = 0; y < r; y++) {
    for (int x = 0; x < c; x++) {
      if(b.at(y).at(x) == '.' || b.at(y).at(x) == '#') continue;
      int manhattan = b.at(y).at(x) - '1' + 1;
      b.at(y).at(x) = '.';
      boom(b, manhattan, y, x);
    }
  }

  for (int y = 0; y < r; y++) {
    for(int x = 0; x < c; x++) {
      cout << b.at(y).at(x);
    }
    cout << endl;
  }
}