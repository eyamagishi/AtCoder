/**
    * filename: a_arithmetic_progression.cpp
    * author: teniwoha
    * X: @RyutaUrushi
    * created: 06/05/2024 08:09:25
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
    int a, b, d;
    cin >> a >> b >> d;
    int sum = a;
    cout << sum;
    sum += d;
    while (sum <= b) {
        cout << ' ' << sum;
        sum += d;
    }

    cout << endl;
    return 0;
}

// A - Arithmetic Progression 解説 by kyopro_friends

// // 問題で求められていることを平易な言葉で言い直すと「A から始めて、D ずつ値を大きくしながら  B まで出力せよ」となります。
// for 文または while 文を適切に用いることで実装できます。

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int a, b, d;
//   cin >> a >> b >> d;
//   for(int n=a; n<=b; n+=d){
//     cout << n << (n==b?'\n':' ');
//   }
// }
