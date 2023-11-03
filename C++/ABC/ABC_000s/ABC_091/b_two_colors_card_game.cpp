#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  vector<string> S(n);
  for(int i = 0;i < n;i++) {cin >> S[i];}
  cin >> m;
  vector<string> T(m);
  for(int i = 0;i < m;i++) {cin >> T[i];}

  int ans = 0;
  for(int i = 0;i < n;i++) {
    int cnt = 0;
    string str = S[i];
    for(int j = 0;j < n;j++) {
      if(S[j] == str) {cnt++;}
    }
    for(int j = 0;j < m;j++) {
      if(T[j] == str) {cnt--;}
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
}