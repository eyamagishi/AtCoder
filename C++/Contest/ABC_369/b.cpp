/**
 * filename: b.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/31/2024 21:04:58
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
    vector<char> s(n);
    int l_locate = 0, r_locate = 0;
    rep (i, 0, n) {
        cin >> a.at(i) >> s.at(i);
        if (l_locate == 0 && s.at(i) == 'L') {
            l_locate = a.at(i);
        }
        if (r_locate == 0 && s.at(i) == 'R') {
            r_locate = a.at(i);
        }
    }
    int fatigue_level = 0;
    rep (i, 0, n) {
        if (s.at(i) == 'L') {
            fatigue_level += abs(a.at(i) - l_locate);
            l_locate = a.at(i);
        } else {
            fatigue_level += abs(a.at(i) - r_locate);
            r_locate = a.at(i);
        }
    }
    cout << fatigue_level << '\n';

    return 0;
}
