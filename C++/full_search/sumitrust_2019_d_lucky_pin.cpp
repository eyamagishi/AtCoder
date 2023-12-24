#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int cnt = 0;
  for (int i = 0; i < 1000; i++) {
    int32_t c[3] = {i / 100, (i / 10) % 10, i % 10};
    int f = 0;
    for (int j = 0; j < n; j++) {
      if (s[j] == (c[f] + '0')) f++;
      if (f == 3) break;
    }
    if (f == 3) cnt++;
  }

  cout << cnt << endl;
}
