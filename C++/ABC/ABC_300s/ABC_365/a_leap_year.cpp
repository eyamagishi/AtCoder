/**
 * filename: a_leap_year.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/17/2024 12:18:55
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
    int y;
    cin >> y;
    if (y%4 != 0) {
        cout << "365\n";
    } else if (y%100 != 0) {
        cout << "366\n";
    } else if (y%400 != 0) {
        cout << "365\n";
    } else {
        cout << "366\n";
    }

    return 0;
}

/* A - Leap Year 解説 by nok0 */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int y;
//     cin >> y;
//     if(y % 4) {
//         cout << 365 << endl;
//         return 0;
//     }
//     if(y % 100) {
//         cout << 366 << endl;
//         return 0;
//     }
//     if(y % 400) {
//         cout << 365 << endl;
//         return 0;
//     }
//     cout << 366 << endl;
//     return 0;
// }
