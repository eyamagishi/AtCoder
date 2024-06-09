/**
    * filename: a_sanitize_hands.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/09/2024 08:51:41
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
#define fore(i, a) for(auto &i:a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    rep (i, 0, n) {
        int tmp;
        cin >> tmp;
        if (m - tmp < 0) {
            cout << i << '\n';
            return 0;
        }
        m -= tmp;
    }

    cout << n << '\n';
    return 0;
}

// A - Sanitize Hands 解説 by mechanicalpenciI

// 1 人目から順に消毒液の残量をシミュレーションしてくことで答えを求めることができます。
// M から始めて、H1,H2,…,H Nを順に引いていきます。 0 未満になることがなければ全員が手を消毒することができるので、答えは N となります。
// そうでなく、Hi を引いた時に初めて 0 未満になったとき、答えは i−1 となります。

// よって、答えを求めることができました。
// 判定条件の不等式に等号をつけるかどうかについて、ある宇宙人が自身の手をすべて消毒した時点でちょうど消毒液がなくなる場合に注意してください。

// c++ による実装例:

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n,m,h,ans=0;
	
// 	cin>>n>>m;
// 	for(int i=0;i<n;i++){
// 		cin>>h;
// 		m-=h;
// 		if(m>=0)ans++;
// 	}

// 	cout<<ans<<endl;
// 	return 0;
// }
