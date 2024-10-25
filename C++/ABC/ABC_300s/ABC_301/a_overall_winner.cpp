/**
 * filename: a_overall_winner.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/25/2024 09:48:58
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
    string s;
    cin >> n >> s;
    int t_cnt = 0, a_cnt = 0;
    bool t_win = false;
    rep (i, 0, n) {
        if (s[i] == 'T') {
            t_cnt++;
            t_win = false;
        } else {
            a_cnt++;
            t_win = true;
        }
    }

    if (t_cnt > a_cnt) {
        cout << "T\n";
    } else if (t_cnt < a_cnt) {
        cout << "A\n";
    } else if (t_win) {
        cout << "T\n";
    } else {
        cout << "A\n";
    }

    return 0;
}

/* A - Overall Winner 解説 by yuto1115 */
/* C++ */
// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     string s;
//     cin >> n >> s;
    
//     int t = 0, a = 0;
//     for (int i = 0; i < n; i++) {
//         if (s[i] == 'T') ++t;
//         else ++a;
//     }
    
//     if (t > a) cout << 'T' << endl;
//     else if (t < a) cout << 'A' << endl;
//     else cout << char('T' + 'A' - s.back()) << endl;
// }
