#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // ここにプログラムを追記
  // 2.の出力
  x *= a + b;
  cout << x << endl;

  // 3.の出力
  x *= x;
  cout << x << endl;

  // 3.の出力
  --x;
  cout << x << endl;

  return 0;
}
