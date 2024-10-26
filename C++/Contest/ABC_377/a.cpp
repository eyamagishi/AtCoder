/**
 * filename: a.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/26/2024 21:00:14
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

    string s;
    cin >> s;
    bool a = false, b = false, c = false;
    rep (i, 0, SZ(s)) {
        if (s[i] == 'A') a = true;
        else if (s[i] == 'B') b = true;
        else c = true;
    }

    if (a && b && c) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}

/* A - Rearranging ABC 解説 by sounansya */
// S = input()
// if "A" in S and "B" in S and "C" in S:
//     print("Yes")
// else:
//     print("No")
