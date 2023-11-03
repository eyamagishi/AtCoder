#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string ans = "Three";
  cin >> N;
  char S[N];
  for(int i=0;i < N;i++) {
    cin >> S[i];
    if(S[i] == 'Y') {
      ans = "Four";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}