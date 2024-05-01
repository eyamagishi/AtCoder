#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int> (w));
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      cin >> a.at(y).at(x);
    }
  }

  for (int x = 0; x < w; x++) {
    for (int y = 0; y < h; y++) {
      if (y != 0) cout << ' ';
      cout << a.at(y).at(x);
    }
    cout << '\n';
  }
}
