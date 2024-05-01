/**
  * filename: a.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 05/01/2024 20:00:08
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
  int n, tmp;
  cin >> n;
  tmp = n % 10;
  n /= 10;
  while (n != 0) {
    if (tmp >= n % 10) {
      cout << "No" << endl;
      return 0;
    }
      tmp = n % 10;
      n /= 10;
  }
  cout << "Yes" << endl;
  return 0;
}
