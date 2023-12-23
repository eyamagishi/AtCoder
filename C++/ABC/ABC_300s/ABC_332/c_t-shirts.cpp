#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int cnt = 0, cnt_tmp = 0, m_tmp = m;
  char s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == '0') {
      cnt_tmp = cnt;
      m_tmp = m;
    } else if (s == '1') {
      if (0 < m_tmp) {
        m_tmp--;
      } else if (0 < cnt_tmp) {
        cnt_tmp--;
      } else {
        cnt++;
      }
    } else if (s == '2') {
      if (0 < cnt_tmp) {
        cnt_tmp--;
      } else {
        cnt++;
      }
    }
  }

  cout << cnt << endl;
}
