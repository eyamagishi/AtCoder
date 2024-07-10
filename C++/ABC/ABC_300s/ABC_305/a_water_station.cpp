/**
 * filename: a_water_station.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/10/2024 09:29:40
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
    int water = (n/5)*5;
    if (n - water < water + 5 - n) {
        cout << water << '\n';
    } else {
        cout << water + 5 << '\n';
    }

    return 0;
}

/* A - Water Station 解説 by MMNMM */
// 計算がメインの解法と探索がメインの解法の 2 つを解説します。 これら以外の正しい解法も存在します。

/* 解法 1 */
// 計算がメインの解法です。

// 全体を 5 で割って考えると、「x= 
// 5N​  に最も近い整数を求める」ことになります。 これは x を小数部分で四捨五入することで求められます。

// よって、答えは「 N を 5 で割ったあと四捨五入して整数にし、それを 5 倍したもの」です。 これをプログラムにすることで正解することができます。

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int N;
//     cin >> N;
//     cout << int(round(N / 5.0)) * 5 << endl;
//     return 0;
// }