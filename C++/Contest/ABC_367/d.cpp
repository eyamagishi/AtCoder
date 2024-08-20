/**
 * filename: d.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/17/2024 20:59:16
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
#define bit(n) (1LL << (n))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vi a(n), a_sum(n);
    rep (i, 0, n) cin >> a.at(i);
    a_sum.at(0) = a.at(0); 
    rep (i, 1, n) {
        a_sum.at(i) = a.at(i) + a_sum.at(i - 1); 
    }

    int cnt = 0;
    rep (i, 0, n) {
        cout << a_sum.at(i) << '\n';
    }

    return 0;
}
