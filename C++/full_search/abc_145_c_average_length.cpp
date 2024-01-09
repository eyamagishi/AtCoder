/**
  * filename: abc_145_c_average_length.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 01/08/2024 19:08:30
  **/
#include <bits/stdc++.h>
using namespace std;

/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;

/* define short */
#define pb push_back
#define mp make_pair
#define SZ(x) ((int)(x).size())
#define bit(n) (1LL<<(n))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i,a) for(auto &i:a)
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)


int main() {
  int n;
  cin >> n;
  vi x(n), y(n), order(n);
  rep (i, 0, n) {
    cin >> x.at(i) >> y.at(i);
    order.at(i) = i;
  }

  long double sum = 0;
  while (next_permutation(all(order))) {
    rep (i, 0, n - 1) {
      int a = order.at(i);
      int b = order.at(i + 1);
      long double dx = x[a] - x[b];
      long double dy = y[a] - y[b];

      sum += sqrt(dx * dx + dy * dy);
    }
  }
  rep (i, 0, n) sum /= (i + 1);

  cout << sum << '\n';
}
