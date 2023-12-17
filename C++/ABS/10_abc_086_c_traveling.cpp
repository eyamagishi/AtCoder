#include <bits/stdc++.h>
using namespace std;

const int DEF_T_MAX_ = 100100;

int main() {
  int n;
  vector<int> t(DEF_T_MAX_), x(DEF_T_MAX_), y(DEF_T_MAX_);
  cin >> n;
  t[0] = x[0] = y[0] = 0;
  for (int i = 0; i < n; i++) cin >> t.at(i + 1) >> x.at(i + 1) >> y.at(i + 1);

  bool can = true;
  for (int i = 0; i < n; i++) {
    int dt = t.at(i + 1) - t.at(i);
    int dist = abs(x.at(i + 1) - x.at(i)) + abs(y.at(i + 1) - y.at(i));
    if (dt < dist) can = false;
    if (dist % 2 != dt % 2) can = false;
  }

  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;
}
