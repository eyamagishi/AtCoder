/**
  * filename: a.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/04/2024 20:56:30
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
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  if (x < y) {
    if (x <= z && z <= y) {
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;
    }
  } else {
    if (y <= z && z <= x) {
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  return 0;
}
