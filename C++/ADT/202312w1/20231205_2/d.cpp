#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> S(n), T(m);
  for (int i = 0; i < n; i++) cin >> S.at(i);
  for (int i = 0; i < m; i++) cin >> T.at(i);

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    string str_tmp = S.at(i).substr(S.at(i).length() - 3);
    for (int j = 0; j < m; j++) {
      if (str_tmp == T.at(j)) {
        cnt++;
        break;
      }
    }
  }

  cout << cnt << endl;
}
