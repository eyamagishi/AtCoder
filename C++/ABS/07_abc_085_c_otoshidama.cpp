#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;
  for (int i = 0; i <= n; i++) {
    int num = n - i;
    for (int j = 0; j <= num; j++) {
      if(10000 * i + 5000 * j + 1000 * (num - j) == y) {
        cout << i << ' ' << j << ' ' << num - j << endl;
        return 0;
      }
    }
  }

  cout << -1 << ' ' << -1 << ' ' << -1 << endl;
  return 0;
}
