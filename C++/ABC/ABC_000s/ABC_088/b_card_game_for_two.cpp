#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for(int i = 0;i < n;i++) {cin >> A[i];}
  sort(A.begin(), A.end());
  int alice_point = 0, bob_point = 0;
  for(int i = 0;i < n;i++) {
    if(i % 2 == 0) {
      alice_point += A.back();
    } else {
      bob_point += A.back();
    }
    A.pop_back();
  }
  cout << alice_point - bob_point << endl;
}