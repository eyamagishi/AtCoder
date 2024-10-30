/**
 * filename: a_alternately.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/30/2024 18:43:41
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
    string s;
    cin >> n >> s;
    char flg = s[0];
    rep (i, 1, n) {
        if (flg == s[i]) {
            cout << "No\n";
            return 0;
        } else {
            flg = s[i];
        }
    }

    cout << "Yes\n";
    return 0;
}

/* A - Alternately 解説 by kyopro_friends */
/* 実装例(C++) */
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	string s;
// 	cin >> s;
// 	for(int i=0;i<n-1;i++){
// 		if(s[i]==s[i+1]){
// 			cout << "No" << endl;
// 			return 0;
// 		}
// 	}
// 	cout << "Yes" << endl;
// }
