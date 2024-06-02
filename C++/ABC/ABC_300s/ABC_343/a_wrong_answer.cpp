/**
    * filename: a_wrong_answer.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 05/29/2024 09:22:58
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
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    rep (i, 0, 10) {
        if (sum != i) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}

// A - Wrong Answer 解説 by cn449

// この問題は様々な方針で解くことができます。特に、この問題は答えが 
// 1 通りではないため、多くの AtCoder Beginner Contest の A 問題と比べて解法の選択肢が多いと思われます。ここでは、解法の 
// 1 つを紹介します。

// A+B の値を計算して、
// A+B の値が 
// 0 であった場合は 
// 1 を、
// 0 でなかった場合は 
// 0 を出力すればよいです。

// 実装例
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << (a + b == 0 ? 1 : 0) << '\n';
// }
