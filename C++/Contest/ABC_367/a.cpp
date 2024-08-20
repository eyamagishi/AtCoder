/**
 * filename: a.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/17/2024 20:59:03
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
    int a, b, c;
    cin >> a >> b >> c;
    if (b <= c) {
        if (b <= a && a <= c) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    } else {
        if (b <= a ||  a <= c) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }


    return 0;
}

/* A - Shout Everyday 解説 by toam */
// 場合分けして出力
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int A, B, C;
//   cin >> A >> B >> C;
//   if (B < C)
//   {
//     if (B < A && A < C)
//       cout << "No" << endl;
//     else
//       cout << "Yes" << endl;
//   }
//   else
//   {
//     if (C < A && A < B)
//       cout << "Yes" << endl;
//     else
//       cout << "No" << endl;
//   }
// }
