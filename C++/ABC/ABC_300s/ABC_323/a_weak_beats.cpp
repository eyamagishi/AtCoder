/**
    * filename: a_weak_beats.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/13/2024 19:54:03
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
    string s;
    cin >> s;
    rep (i, 0, 8) {
        if (s[i * 2 + 1] == '1') {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}

// A - Weak Beats 解説 by mechanicalpenciI

// 文字列 S を標準入力から読み込み、問題文の指示通り、2 以上 16 以下の偶数 i について S の i 文字目が 1 であるかを確認すれば良いです。
// これは for 文と if 文を用いて実装することができます。
// 今回は文字数が決まっているため、調べるのは 2,4,6,8,10,12,14,16 文字と完全に決まっており、if 文のみで実装する事も十分可能です。
// よって、この問題を解くことができました。

// 以下は、実装時の注意点です。

// 文字列中の文字を参照する時、多くの言語ではインデックスが zero-basedである事に注意してください。すなわち変数 
// s の中に文字列が格納されている時、s[0] が 1 文字目、s[1] が 2 文字目,…を表します。
// すなわち今回の問題で言えば s[2],s[4],…,s[16] でなく、s[1],s[3],…,s[15] を調べる必要があります。
// 問題文中との添字のズレに注意してください。

// また、 S の i 文字目が1であるような16 以下の偶数 i が複数存在する時、 No を複数回出力しないように気をつけてください。
//  No を出力したらすぐに終了するようにするか、bool 型変数のフラッグなどで管理して最後にまとめて出力すると良いでしょう。

/* c++ による実装例: */
// #include <bits/stdc++.h>
// using namespace std;

// int main(void) {
// 	string s;
// 	cin>>s;
// 	for(int i=1;i<16;i+=2){
// 		if(s[i]!='0'){
// 			cout<<"No"<<endl;
// 			return 0;
// 		}
// 	}
// 	cout<<"Yes"<<endl;
// 	return 0;
// }
