/**
 * filename: a.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/19/2024 20:58:20
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
    int n, c, time = -1000, cnt = 0;
    cin >> n >> c;
    rep (i, 0, n) {
        int tmp;
        cin >> tmp;
        if (tmp - time >= c) {
            cnt++;
            time = tmp;
        }
    }

    cout << cnt << '\n';
    return 0;
}
