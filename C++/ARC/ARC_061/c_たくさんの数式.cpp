// 後回し 20231111
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
string S;
int N;

int main() {
  cin >> S;
  N = S.length();

  ll ans = 0;
  for (int i = 0; i < N; i++) {
    ll sm = 0;
    ll a = S[0] - '0';
    for (int j = 0; j < N; j++) {
      if (i & (1 << j)) {
        sm += a;
        a = 0;
      }
      a = a * 10 + S[j + 1] - '0';
    }
    sm += a;
    ans += sm;
  }
  cout << ans << endl;
}