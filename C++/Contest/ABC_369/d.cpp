/**
 * filename: d.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/31/2024 21:28:53
 * result: 
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
    vi a(n);
    rep (i, 0, n) cin >> a.at(i);

    ll sum = 0;
    bool is_odd = true;
    rep (i, 0, n) {
        if (is_odd) {
            sum += a.at(i);
            is_odd = false;
        }
        else {
            if (n <= (i + 1) || 2 * a.at(i) + a.at(i + 1) >= 2 * a.at(i + 1)) {
                sum += 2 * a.at(i);
                is_odd = true;
            }
        }
        cout << "sum:" << sum << '\n';
    }

    cout << sum << '\n';
    return 0;
}
