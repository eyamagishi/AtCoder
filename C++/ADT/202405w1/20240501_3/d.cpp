/**
  * filename: d.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/01/2024 20:22:33
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
  int n, x = 0, y = 0;
  int direction = 0;
  cin >> n;
  rep(i, 0, n) {
    char tmp;
    cin >> tmp;
    if (tmp == 'S') {
      if (direction == 0) {
        x++;
      } else if (direction == 1) {
        y--;
      } else if (direction == 2) {
        x--;
      } else if (direction == 3) {
        y++;
      }
    } else if (tmp == 'R') {
      direction = (direction + 1)%4;
    }
  }
  cout << x << ' ' << y << endl;
  return 0;
}
