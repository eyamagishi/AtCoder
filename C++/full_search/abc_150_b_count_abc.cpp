#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int cnt = 0;
  for (int i = 0; i < n - 2; i++) {
    if (s[i] != 'A' || s[i + 1] != 'B' || s[i + 2] != 'C') continue;
    cnt++;
  }

  cout << cnt << endl;
}
