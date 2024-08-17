/**
 * filename: a_glutton_takahashi.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 08/17/2024 12:32:47
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
    cin >> n;
    vs s(n);
    rep (i, 0, n) cin >> s.at(i);

    bool sweet_before = false;
    rep (i, 0, n) {
        if (s.at(i) == "sweet") {
            if (sweet_before && i + 1 != n) {
                cout << "No\n";
                return 0;
            } else {
                sweet_before = true;
            }
        } else {
            sweet_before = false;
        }
    }

    cout << "Yes\n";
    return 0;
}

/* A - Glutton Takahashi 解説 by cn449 */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	vector<string> s(n);
// 	for (int i = 0; i < n; i++) cin >> s[i];
// 	string ans = "Yes";
// 	for (int i = 0; i < n - 2; i++) if (s[i] == "sweet" && s[i + 1] == "sweet") ans = "No";
// 	cout << ans << '\n';
// }
