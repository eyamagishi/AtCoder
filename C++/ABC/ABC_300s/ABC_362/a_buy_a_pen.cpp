/**
 * filename: a_buy_a_pen.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/14/2024 11:26:29
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
    int r, g, b;
    string c;
    cin >> r >> g >> b >> c;
    if (c == "Red") {
        cout << min(g, b) << '\n';
    } else if (c == "Green") {
        cout << min(r, b) << '\n';
    } else {
        cout << min(r, g) << '\n';
    }

    return 0;
}

/* A - Buy a Pen 解説 by toam */
// C が Red のときは min(G,B)，Green のときは min(B,R)，Blue のときは min(R,G) が答えになります．

// このような条件分岐の問題は，if 文を用いて実装することができます．

/* 実装例 */
// R, G, B = map(int, input().split())
// C = input()
// if C == "Red":
//     print(min(G, B))
// if C == "Green":
//     print(min(B, R))
// if C == "Blue":
//     print(min(R, G))
