#include <bits/stdc++.h>
using namespace std;

int loop();

int main() {
  int n;
  string s;
  cin >> n >> s;

  int size = (int)s.size(), max_cnt = -1;
  bool is_maru;
  for (int i = 0; i < size; i++) {
    if (s[i] == 'o') is_maru = true;
    else is_maru = false;
    for (int j = i + 1; j < size; j++) {
      if (s[j] == 'o') continue;
      int cnt = 0;
      if (is_maru) cnt = j - i;
      else cnt = j - i - 1;
      if (cnt != 0 && max_cnt < cnt) max_cnt = cnt;
      break;
    }
  }

  cout << max_cnt << endl;
}
