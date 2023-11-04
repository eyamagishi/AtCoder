#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> D(n);
  for(int i = 0;i < n;i++) {cin >> D.at(i);}

  sort(D.rbegin(), D.rend());
  int keep = D.at(0), cnt = 1;
  for(int i = 1;i < n;i++) {
    if(D.at(i) != keep) {
      cnt++;
      keep = D.at(i);
    }
  }
  cout << cnt << endl;
}