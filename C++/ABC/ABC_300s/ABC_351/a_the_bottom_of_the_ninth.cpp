/**
  * filename: a_the_bottom_of_the_ninth.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 04/30/2024 18:06:44
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
  int a_sum = 0, b_sum = 0;
  rep(i, 0, 9) {
    int a;
    cin >> a;
    a_sum += a;
  }
  rep(i, 0, 8) {
    int b;
    cin >> b;
    b_sum += b;
  }

  cout << a_sum - b_sum + 1 << endl;
}
