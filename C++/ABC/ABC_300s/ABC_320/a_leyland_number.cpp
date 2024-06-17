/**
    * filename: a_leyland_number.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/18/2024 08:25:12
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
    int a, b, a_b = 1, b_a = 1;
    cin >> a >> b;
    rep (i, 0, b) {
        a_b *= a;
    }
    rep (i, 0, a) {
        b_a *= b;
    }
    cout << a_b + b_a << '\n';

    return 0;
}

// A - Leyland Number 解説 by cn449

// A B  と B A  の値をそれぞれ求め、足し合わせればよいです。
// A B  の値は for 文を用いて 1 に A をかける操作を B 回行うなどの方法で求めることができます。
// B A  についても同様です。

/* 実装例 */
// #include <iostream>
// using namespace std;

// int main() {
// 	int a, b;
// 	cin >> a >> b;
// 	int x = 1, y = 1;
// 	for (int _ = 0; _ < b; _++) x *= a;
// 	for (int _ = 0; _ < a; _++) y *= b;
// 	cout << x + y << '\n';
// }
