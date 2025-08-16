/**
 * filename: a_123233.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/16/2025 20:40:17
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

    string s;
    cin >> s;

    int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    fore(c, s) {
        if (c == '1') {
            cnt_1++;
        } else if (c == '2') {
            cnt_2++;
        } else if (c == '3') {
            cnt_3++;
        }
    }

    if (cnt_1 == 1 && cnt_2 == 2 && cnt_3 == 3) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
