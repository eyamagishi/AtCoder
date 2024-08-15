/**
 * filename: a.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/20/2024 21:00:09
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
    int r;
    cin >> r;
    if (r < 100) {
        cout << 100 - r << '\n';
    } else if (r < 200) {
        cout << 200 - r << '\n';
    } else if (r < 300) {
        cout << 300 - r << '\n';
    }

    return 0;
}