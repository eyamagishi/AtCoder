/**
 * filename: b_1d_keyboard.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/26/2024 20:46:49
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
    /* 実装箇所 */
    string s;
    cin >> s;
    int cnt = 0;
    char idx = 'A';
    rep (i, 0, SZ(s)) {
        cnt += abs(idx - s[i]);
        idx = s[i];
    }

    cout << cnt << '\n';
    /* 実装箇所 */
    return 0;
}