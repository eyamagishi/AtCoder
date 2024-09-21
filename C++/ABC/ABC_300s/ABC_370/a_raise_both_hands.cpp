/**
 * filename: a_raise_both_hands.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 09/14/2024 12:59:32
 * result: AC(1)
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
    int l, r;
    cin >> l >> r;
    if (l == 1 && r == 0) {
        cout << "Yes\n";
    } else if (l == 0 && r == 1) {
        cout << "No\n";
    } else {
        cout << "Invalid\n";
    }

    return 0;
}
