// AC
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vector<int> a(n), b(n), a_rep(n), b_rep(n);
  for (int i = 0; i < n; i++) cin >> a.at(i);
  for (int i = 0; i < n; i++) cin >> b.at(i);

  vector<bool> success(n, false);
  for (int i = 0; i < x; i++) {
    int max = -1, max_num = -1;
    for (int j = 0; j < n; j++) {
      if (success.at(j)) continue;
      if (max < a.at(j)) {
        max = a.at(j);
        max_num = j;
      }
    }
    success.at(max_num) = true;
  }
  for (int i = 0; i < y; i++) {
    int max = -1, max_num = -1;
    for (int j = 0; j < n; j++) {
      if (success.at(j)) continue;
      if (max < b.at(j)) {
        max = b.at(j);
        max_num = j;
      }
    }
    success.at(max_num) = true;
  }
  for (int i = 0; i < z; i++) {
    int max = -1, max_num = -1;
    for (int j = 0; j < n; j++) {
      if (success.at(j)) continue;
      if (max < a.at(j) + b.at(j)) {
        max = a.at(j) + b.at(j);
        max_num = j;
      }
    }
    success.at(max_num) = true;
  }

  for (int i = 0; i < n; i++) {
    if (success.at(i)) cout << i + 1 << endl;
  }
}