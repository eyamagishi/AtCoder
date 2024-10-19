/**
 * filename: c.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/19/2024 20:58:26
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
#define bit(n) (1LL << (n))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi a(n), b(n-1);
    rep (i, 0, n) {
        cin >> a.at(i);
    }
    rep (i, 0, n - 1) {
        cin >> b.at(i);
    }

    sort(rall(a));
    sort(rall(b));

    int box = a.at(n-1);
    bool flg = false;
    rep (i, 0, n-1) {
        if(!flg && (a.at(i) > b.at(i))) {
            box = a.at(i);
            flg = true;
        }
        if (flg && (a.at(i+1) > b.at(i))) {
            cout << -1 << '\n';
            return 0;
        }
    }

    cout << box << '\n';
    return 0;
}
