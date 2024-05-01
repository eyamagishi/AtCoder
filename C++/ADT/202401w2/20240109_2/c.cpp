/**
  * filename: c.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 01/09/2024 17:33:49
  * result: AC
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
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()


int main() {
  int n;
  vi s_cnt;
  vs s;
  cin >> n;
  rep (i, 0, n) {
    string tmp;
    cin >> tmp;
    auto result = find(all(s), tmp);
    if (result == s.end()) {
      s.pb(tmp);
      s_cnt.pb(1);
    } else {
      int num = distance(s.begin(), result);
      s_cnt.at(num)++;
    }
  }
  int max_index = -1, max_sum = -1;
  rep (i, 0, SZ(s_cnt)) {
    if (max_sum < s_cnt.at(i)) {
      max_index = i;
      max_sum = s_cnt.at(i);
    }
  }

  cout << s.at(max_index) << '\n';
}
