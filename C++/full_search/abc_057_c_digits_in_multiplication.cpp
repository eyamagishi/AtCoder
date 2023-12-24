#include <bits/stdc++.h>
using namespace std;

int main() {
  long n;
  cin >> n;

  int cnt = 11;
  for (long i = 1; i * i <= n; i++) {
    if (n % i != 0) continue;
    int tmp = 0;
    long b = n / i;
    while (b != 0) {
      tmp++;
      b /= 10;
    }
    cnt = min(cnt, tmp);
  }

  cout << cnt << endl;
}
