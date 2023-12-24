#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;

  int yen = 0, c_tmp = 2 * c;
  if (a + b <= c_tmp) {
    // ABピザが高い時には個別に買う。
    yen = a * x + b * y;
  } else {
    // ABピザが安い時には買う。買い方には種類がある。
    if (x > y) {
      yen = c_tmp * y;
      int def = x - y;
      if (c_tmp < a) {
        yen += c_tmp * def;
      } else {
        yen += a * def;
      }
    } else {
      yen = c_tmp * x;
      int def = y - x;
      if (c_tmp < b) {
        yen += c_tmp * def;
      } else {
        yen += b * def;
      }
    }
  }

  cout << yen << endl;
}
