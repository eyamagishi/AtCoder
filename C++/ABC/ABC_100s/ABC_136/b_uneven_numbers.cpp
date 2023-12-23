#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int cnt = 0, tmp = i;
    while (tmp != 0) {
      cnt++;
      tmp /= 10;
    }
    if (cnt % 2 != 0) ans++;
  }

  cout << ans << endl;
}