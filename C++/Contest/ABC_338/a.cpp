/**
  * filename: a.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 01/27/2024 20:58:16
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
  cin >> s;

  rep (i, 0, SZ(s)) {
    if (i == 0 && (s[i] < 'A' || 'Z' < s[i])) {
      cout << "No" << '\n';
      return 0;
    } else if (i != 0 && (s[i] < 'a' || 'z' < s[i])) {
      cout << "No" << '\n';
      return 0;
    }
  }

  cout << "Yes" << '\n';
  return 0;
}
