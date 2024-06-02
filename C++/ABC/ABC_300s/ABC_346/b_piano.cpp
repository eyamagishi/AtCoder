/**
    * filename: b_piano.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/25/2024 10:34:05
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

const string PIANO = "wbwbwwbwbwbw";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int w, b;
    cin >> w >> b;
    rep (i, 0, SZ(PIANO)) {
        int nw = 0, nb = 0;
        rep (j, 0, w + b) {
            if (PIANO[(i + j) % PIANO.size()] == 'w') ++nw;
            else ++nb;
        }
        if (w == nw and b == nb) {
            cout << "Yes" << '\n';
            return 0;
        }
    }

    cout << "No" << '\n';
    return 0;
}
