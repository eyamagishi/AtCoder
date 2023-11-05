#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  bool yes = false;
  for(int i = 0; i < N - 1; i++) {
    if (S[i] == 'a' && S[i + 1] == 'b') yes = true;
    if (S[i] == 'b' && S[i + 1] == 'a') yes = true;
  }
  cout << (yes ? "Yes" : "No") << endl;
}
