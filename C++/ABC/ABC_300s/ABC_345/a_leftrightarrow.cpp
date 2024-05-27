/**
    * filename: a_leftrightarrow.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/27/2024 08:54:01
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
#define fore(i, a) for(auto &i:a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    rep (i, 0, SZ(s)) {
        if (i == 0) {
            if (s[i] != '<') {
                cout << "No\n";
                return 0;
            }
        } else if (i == SZ(s) - 1) {
            if (s[i] != '>') {
                cout << "No\n";
                return 0;
            }
        } else {
            if (s[i] != '=') {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";
    return 0;
}
