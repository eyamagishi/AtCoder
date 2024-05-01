#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n + 1, -1);
  for (int i = 1; i <= n; i++) cin >> p.at(i);

  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (p.at(i) != 1) continue;
  }

  cout << cnt << endl;
}
