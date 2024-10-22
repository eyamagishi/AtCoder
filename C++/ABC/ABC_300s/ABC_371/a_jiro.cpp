/**
 * filename: a_jiro.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/22/2024 08:52:59
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
    char sab, sac, sbc;
    cin >> sab >> sac >> sbc;
    if (sab == '<') {
        if (sac == '<') {
            if (sbc == '<') {
                cout << "B\n";
            } else {
                cout << "C\n";
            }
        } else {
            cout << "A\n";
        }
    } else {
        if (sac == '<') {
            cout << "A\n";
        } else {
            if (sbc == '<') {
                cout << "C\n";
            } else {
                cout << "B\n";
            }
        }
    }

    return 0;
}

/* A - Jiro 解説 by nok0 */
/* 実装例(C++): */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     char a, b, c;
//     cin >> a >> b >> c;
//     if(a != b)
//         cout << "A" << endl;
//     else if(a == c)
//         cout << "B" << endl;
//     else
//         cout << "C" << endl;
// }
