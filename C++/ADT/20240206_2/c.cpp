/**
  * filename: c.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 02/06/2024 17:30:28
  * result: 未提出
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
  vi angle(1, 0);
  int num = 0;
  rep (i, 0, n) {
    cin >> num;
    if (360 <= num) num -= 360;
    angle.pb(num);
  }
  all(angle);

  rep (i, 0, n) {
    int tmp = 0;
  }
}
