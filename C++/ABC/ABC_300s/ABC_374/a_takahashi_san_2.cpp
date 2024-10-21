/**
 * filename: a_takahashi_san_2.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/21/2024 19:12:18
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
    string s;
    cin >> s;
    int s_size = SZ(s);
    if (s[s_size - 1] == 'n' && s[s_size - 2] == 'a' && s[s_size - 3] == 's') {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
