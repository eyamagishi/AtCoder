#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int num = i / 10, tmp = i % 10;
    while (0 < num) {
      tmp += num % 10;
      num /= 10;
    }
    if (a <= tmp && tmp <= b) sum += i;
  }

  cout << sum << endl;
}
