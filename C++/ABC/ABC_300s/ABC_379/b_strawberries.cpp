/**
 * filename: b_strawberries.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 11/12/2024 22:04:03
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

    int n, k;
    string s;
    cin >> n >> k >> s;

    int cnt = 0, ans = 0;
    rep (i, 0, n) {
        if (s[i] == 'O') cnt++;
        else cnt = 0;

        if (cnt == k) {
            ans++;
            cnt = 0;
        }
    }

    cout << ans << '\n';
    return 0;
}
