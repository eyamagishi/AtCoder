/**
 * filename: b_unvarnished_report.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/22/2024 21:09:32
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
    string s, t;
    cin >> s >> t;
    int s_size = SZ(s), t_size = SZ(t), str_size = max(s_size, t_size);
    rep (i, 0, str_size) {
        if (i >= s_size || i >= t_size || s[i] != t[i]) {
            cout << i + 1 << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';
    return 0;
}

/* B - Unvarnished Report 解説 by mechanicalpenciI */
/* c++ による実装例: */
// #include <bits/stdc++.h>

// using namespace std;

// int main(void){
// 	string s,t;
// 	cin>>s;
// 	cin>>t;
// 	int n = min(s.size(),t.size());
// 	for(int i=0;i<n;i++){
// 		if(s[i]!=t[i]){
// 			cout<<(i+1)<<endl;
// 			return 0;
// 		}
// 	}
// 	if(s.size()!=t.size())cout<<(n+1)<<endl;
// 	else cout<<0<<endl;
// 	return 0;
// }

/*
最大ではなく最小で値をとった方が良い。
最小の範囲で判断してもしその中に無ければその次がエラーなのでそれを出力するようにすれば簡単にできる。
*/