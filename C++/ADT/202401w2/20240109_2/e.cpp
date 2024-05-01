/**
  * filename: e.cpp
  * author: teniwoha
  * X: @RyutaUrushi
  * created: 01/09/2024 17:57:45
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
#define bit(n) (1LL<<(n))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i,a) for(auto &i:a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()

bool customCompare(const std::string& str1, const std::string& str2) {
  // 独自の順番を定義
  const std::vector<std::string> customOrder = {"banana", "grape", "apple", "orange"};

  // str1とstr2がどれに該当するかを取得
  auto it1 = std::find(customOrder.begin(), customOrder.end(), str1);
  auto it2 = std::find(customOrder.begin(), customOrder.end(), str2);

  // 該当する要素がなければアルファベット順に比較
  if (it1 == customOrder.end() || it2 == customOrder.end()) {
      return str1 < str2;
  }

  // 独自の順番に基づいて比較
  return it1 < it2;
}

int main() {
  string x;
  int n;
  cin >> x >> n;
  vs s(n);
  rep (i, 0, n) cin >> s.at(i);


}
