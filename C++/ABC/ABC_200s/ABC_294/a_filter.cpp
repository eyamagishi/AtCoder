/**
 * filename: a_filter.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 11/01/2024 16:23:23
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

    int n;
    cin >> n;
    vector<int> a(n);
    rep (i, 0, n) cin >> a.at(i);
    bool flg = false;
    rep (i, 0, n) {
        if (a.at(i) % 2 == 0) {
            cout << a.at(i) << ' ';
        }
    }

    cout << '\n';
    return 0;
}

/* A - Filter 解説 by MMNMM */
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     // 長さ N の配列
//     vector<int> A(N);
//     // 順に入力
//     for (auto&& a : A)
//         cin >> a;

//     for (const auto a : A) 
//         // 2 で割ったあまりが 0 なら偶数
//         if (a % 2 == 0)
//             cout << a << " ";
//     cout << endl;

//     return 0;
// }
