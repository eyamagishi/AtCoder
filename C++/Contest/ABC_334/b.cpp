#include <bits/stdc++.h>
using namespace std;

int main() {
  long long m;
  long long a, l, r;
  cin >> a >> m >> l >> r;

  long long cnt = 0;
  long long tmp = a;
  if (a < l) {
    long long stay = abs((l - a) / m);
    tmp += m * (stay + 1);
    cnt += abs((r - tmp) / m);
  } else if (r < a) {
    long long stay = abs((l - a) / m);
    tmp -= m * (stay + 1);
    cnt += abs((tmp - l) / m);
  } else {
    cnt = 1;
    cnt += abs((r - a) / m);
    cnt += abs((a - l) / m);
  }

  cout << cnt << endl;
}
