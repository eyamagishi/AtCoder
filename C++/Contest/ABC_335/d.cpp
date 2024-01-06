#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<string>> grid(n, vector<string> (n, ""));
  grid.at(n / 2).at(n / 2) = "T";
  int y = 0, x = 0, cnt = 1;
  char direct = 'R';
  while (grid.at(y).at(x) != "T") {
    grid.at(y).at(x) = to_string(cnt);
    cnt++;
    if (direct == 'R') {
      if (n <= x + 1 || grid.at(y).at(x + 1) != "") {
        y++;
        direct = 'D';
      } else {
        x++;
      }
    } else if (direct == 'L') {
      if (x - 1 < 0 || grid.at(y).at(x - 1) != "") {
        y--;
        direct = 'U';
      } else {
        x--;
      }
    } else if (direct == 'U') {
      if (y - 1 < 0 || grid.at(y - 1).at(x) != "") {
        x++;
        direct = 'R';
      } else {
        y--;
      }
    } else if (direct == 'D') {
      if (n <= y + 1 || grid.at(y + 1).at(x) != "") {
        x--;
        direct = 'L';
      } else {
        y++;
      }
    }
  }

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      cout << grid.at(y).at(x);
      if (x + 1 < n) cout << ' ';
    }
    cout << endl;
  }
}
