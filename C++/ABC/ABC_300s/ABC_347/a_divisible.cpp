/**
    * filename: a_divisible.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/24/2024 08:29:27
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
#define fore(i, a) for(auto &i:a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, sum = 0;
    cin >> n >> k;
    vi ans;
    rep (i, 0, n) {
        int a;
        cin >> a;
        if (a % k == 0) {
            int tmp = a/k;
            ans.pb(tmp);
        }
    }

    rep (i, 0, SZ(ans)) {
        if (i != 0) cout << ' ';
        cout << ans.at(i);
    }
    cout << '\n';
    return 0;
}
