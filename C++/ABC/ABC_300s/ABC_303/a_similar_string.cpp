/**
 * filename: a_similar_string.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/23/2024 09:04:12
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s, t;
    cin >> n >> s >> t;
    rep(i, 0, n)
    {
        if (s[i] == t[i] ||
            (s[i] == 'o' && t[i] == '0') || (s[i] == '0' && t[i] == 'o') ||
            (s[i] == 'l' && t[i] == '1') || (s[i] == '1' && t[i] == 'l'))
        {
            continue;
        }
        cout << "No\n";
        return 0;
    }

    cout << "Yes\n";
    return 0;
}

/* A - Similar String 解説 by nok0 */
/* 実装例（C++）： */
// #include <bits/stdc++.h>
// using namespace std;

// bool sim(char c, char d) {
//     return c == d or (c == '0' and d == 'o') or (c == 'o' and d == '0') or (c == 'l' and d == '1') or (c == '1' and d == 'l');
// }

// int main() {
//     int n;
//     string s, t;
//     cin >> n >> s >> t;
//     bool string_sim = 1;
//     for(int i = 0; i < n; i++) string_sim &= sim(s[i], t[i]);
//     cout << (string_sim ? "Yes\n" : "No\n");
// }
