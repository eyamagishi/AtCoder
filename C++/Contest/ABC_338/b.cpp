/**
  * filename: b.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 01/27/2024 21:05:37
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
  string s;
  vi count(26, 0);
  cin >> s;

  rep (i, 0, SZ(s)) {
    count.at(s[i] - 'a')++;
  }

  int max_num = -1, max_index = -1;
  rep (i, 0, 26) {
    if (max_num < count.at(i)) {
      max_num = count.at(i);
      max_index = i;
    }
  }

  char ans = 'a' + max_index;
  cout << ans << '\n';
}
