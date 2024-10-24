/**
 * filename: a_seats.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/15/2024 12:50:52
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

    int n, cnt = 0;
    string s;
    cin >> n >> s;
    
    rep (i, 0, n-2) {
        if (s[i] == '#' && s[i + 1] == '.' && s[i + 2] == '#') cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
