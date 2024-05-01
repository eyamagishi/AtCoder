#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int> (n));
  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      cin >> a.at(y).at(x);
      cout << x << ' ' << y << endl;
    }
  }

  cout << "business logic\n";

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      if (y == 0) {
        if (x == 0) cout << a.at(y + 1).at(x);
        else cout << a.at(y).at(x - 1);
      } else if (y + 1 == n) {
        if (x + 1 == n) cout << a.at(y - 1).at(x);
        else cout << a.at(y).at(x + 1);
      } else {
        if (x == 0) cout << a.at(y + 1).at(x);
        else if (y + 1 == n) cout << a.at(y - 1).at(x);
        else cout << a.at(y).at(x);
      }
      if (x + 1 != n) cout << ' ';
    }
    cout << '\n';
  }
}
