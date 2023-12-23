// 未着手
// 包除原理
// 等差数列
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (a % b == 0)return b;
  else return gcd(b, a%b);
}

long long arith_prog(long long n) {
  return (n * (n + 1)) / 2;
}
int main() {
  long long n, a, b;
  cin >> n >> a >> b;

  long long sum = 0, a_cnt = n / a, b_cnt = n / b, l = (a * b) / gcd(a, b);
  sum = arith_prog(n) - a * arith_prog(a_cnt) - b * arith_prog(b_cnt) + l * arith_prog(n / l);

  cout << sum << endl;
}
