/**
  * filename: b_spot_the_difference.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 04/30/2024 20:52:21
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
  cin >> n;
  vs a(n);
  rep(i, 0, n) cin >> a.at(i);
  rep(i, 0, n) rep(j, 0, n) {
    char b;
    cin >> b;
    if (a.at(i)[j] != b) {
      cout << i + 1 << ' ' << j + 1 << endl;
    }
  }
}
