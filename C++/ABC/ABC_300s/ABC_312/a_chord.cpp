/**
 * filename: a_chord.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 06/27/2024 08:52:52
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

const vector<string> STR = {
	"ACE",
	"BDF",
	"CEG",
	"DFA",
	"EGB",
	"FAC",
	"GBD"
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string str;
	cin >> str;
	if (STR.end() == find(all(STR), str)) {
		cout << "No\n";
	} else {
		cout << "Yes\n";
	}

	return 0;
}

/* A - Chord 解説 by cn449 */
// 与えられた条件にしたがって、S が ACE、BDF、CEG、DFA、EGB、FAC、GBD のいずれかと等しいか判定すればよいです。
// また、実は長さ 3 の文字列 S について、S が ACE、BDF、CEG、DFA、EGB、FAC、GBD のいずれかと等しいことは
// S が ACEGBDFAC の部分文字列であることと同値なのでこの性質を使って判定することもできます。

/* 実装例1 */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
// 	string s;
// 	cin >> s;
// 	if (s == "ACE" or s == "BDF" or s == "CEG" or s == "DFA" or s == "EGB" or s == "FAC" or s == "GBD") cout << "Yes\n";
// 	else cout << "No\n";
// }

/* 実装例2 */
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
// 	string s;
// 	cin >> s;
// 	string t = "ACEGBDFAC";
// 	cout << (t.find(s) == string::npos ? "No" : "Yes") << '\n';
// }
