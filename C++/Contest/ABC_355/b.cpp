/**
    * filename: b.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/25/2024 20:43:55
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
    int n, m;
    cin >> n >> m;
    vi a(n), b(m), c(n + m);
    rep (i, 0, n) {
        cin >> a.at(i);
        c.at(i) = a.at(i);
    }
    rep (i, 0, m) {
        cin >> b.at(i);
        c.at(n + i) = b.at(i);
    }

    sort(all(c));

    bool flg = false;
    rep (i, 0, n + m) {
        if (find(all(a), c.at(i)) == a.end()) {
            flg = false;
            continue;
        }
        if (!flg) flg = true;
        else {
            cout << "Yes\n";
            return 0; 
        }
    }

    cout << "No\n";
    return 0;
}
