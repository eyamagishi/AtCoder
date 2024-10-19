/**
 * filename: b.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/19/2024 20:58:23
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
    int n, q, l = 1, r = 2, cnt = 0;
    cin >> n >> q;
    rep (i, 0, q) {
        char h;
        int t;
        cin >> h >> t;
        if (h == 'R') {
            if(l < r) {
                if(l < t) {
                    cnt += abs(t-r);
                } else {
                    cnt += abs(t+n-r);
                }
            } else {
                if(t < l) {
                    cnt += abs(t-r);
                } else {
                    cnt += abs(n-t+r);
                }
            }
            r = t;
        } else {
            if(l < r) {
                if(r < t) {
                    cnt += abs(n-t+l);
                } else {
                    cnt += abs(t-l);
                }
            } else {
                if(t < r) {
                    cnt += abs(t+n-l);
                } else {
                    cnt += abs(t-l);
                }
            }
            l = t;
        }
    }

    cout << cnt << '\n';
    return 0;
}
