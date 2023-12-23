#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, g, m;
  cin >> k >> g >> m;

  int grass = 0, mug = 0;
  for (int i = 0; i < k; i++) {
    if (grass == g) grass = 0;
    else if (mug == 0) mug = m;
    else if (0 <= mug - (g - grass)) {
      mug -= g - grass;
      grass = g;
    } else {
      grass += mug;
      mug = 0;
    }
  }

  cout << grass << ' ' << mug << endl;
}
