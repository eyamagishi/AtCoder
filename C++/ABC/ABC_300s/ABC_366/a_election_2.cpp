/**
 * filename: a_election_2.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/16/2024 09:39:29
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
    int n, t, a;
    cin >> n >> t >> a;
    if (n/2 < t || n/2 < a) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}

/* A - Election 2 解説 by MtSaka */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, t, a;
//     cin >> n >> t >> a;
//     if (a >= (n + 1) / 2 || t >= (n + 1) / 2) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }
