/**
 * filename: a_treasure_chest.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/28/2024 14:51:46
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
    string s;
    cin >> n >> s;
    bool flg = false, in = false;
    rep (i, 0, n) {
        if (flg) {
            if (s[i] == '*') in = true;
        }
        if (s[i] == '|') {
            flg = !flg;
        }
    }

    if (in) cout << "in\n";
    else cout << "out\n";
    return 0;
}

/* A - Treasure Chest 解説 by MMNMM */

/* C++ での実装例 */
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int N;
//     string S;
//     cin >> N >> S;

//     int v_first = -1, s, v_second;
//     for (int i = 0; i < N; ++i) {
//         if (S[i] == '|') {
//             if (v_first < 0)
//                 v_first = i;
//             else
//                 v_second = i;
//         }
//         if (S[i] == '*')
//             s = i;
//     }

//     if (v_first < s && s < v_second)
//         cout << "in" << endl;
//     else
//         cout << "out" << endl;

//     return 0;
// }
