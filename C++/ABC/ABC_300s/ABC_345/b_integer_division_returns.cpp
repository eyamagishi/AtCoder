/**
    * filename: b_integer_division_returns.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/27/2024 19:37:53
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
    ll x;
    cin >> x;
    if ((x + 9) < 0 && (x + 9) % 10 != 0) {
        cout << (x + 9) / 10 - 1 << endl;
    } else {
        cout << (x + 9) / 10 << endl;
    }
    return 0;
}
