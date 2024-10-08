/**
 * filename: a.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/31/2024 21:00:16
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
    int a, b;
    cin >> a >> b;
    if (a == b) cout << 1 << '\n';
    else if (a < b) {
        if ((b - a) % 2 == 0) cout << 3 << '\n';
        else cout << 2 << '\n';
    } else {
        if ((a - b) % 2 == 0) cout << 3 << '\n';
        else cout << 2 << '\n';
    }

    return 0;
}
