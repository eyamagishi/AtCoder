#include <bits/stdc++.h>
using namespace std;

int main() {
  string S[4], t;
  cin >> S[1] >> S[2] >> S[3] >> t;

  for (int i = 0; i < (int)t.size(); i++) cout << S[t[i] - '0'];
  cout << endl;
}
