/**
 * filename: a_weekly_records.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 07/08/2024 08:35:34
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
    vi a(n, 0);
    rep (i, 0, n * 7) {
        int tmp;
        cin >> tmp;
        a.at(i/7) += tmp;
    }
    rep (i, 0, n) {
        if (i != 0) cout << ' ';
        cout << a.at(i);
    }

    return 0;
}

/* A - Weekly Records 解説 by kyopro_friends */
// この問題は配列とfor文を使うことで解くことができます。使っている言語において、配列の使い方、for文の使い方を確認しておきましょう。

// 7 日分の合計を求めるには、for文を使って 7 回ループする方法の他、sumなどの組み込み関数を用いる方法もあります。

/* 実装例(C++) */
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	vector<int>a(7*n);
// 	for(int i=0;i<7*n;i++)cin >> a[i];

// 	for(int i=0;i<n;i++){
// 		int sum=0;
// 		for(int j=0;j<7;j++)sum+=a[7*i+j];
// 		if(i!=n-1){
// 			cout << sum << ' ';
// 		}else {
// 			cout << sum << endl;
// 		}
// 	}
// }
