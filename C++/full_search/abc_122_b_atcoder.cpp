#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, search_str = "ACGT";
  cin >> s;
  int s_size = (int)s.size();

  int ans = 0;
  for (int l = 0; l < s_size; l++) {
    for (int r = l; r < s_size; r++) {
      bool ok = true;
      for (int x = l; x < r + 1; x++) {
        if (search_str.find(s[x]) == string::npos) ok = false;
      }
      if (ok) ans = max(ans, r - l + 1);
    }
  }

  cout << ans << endl;
}
