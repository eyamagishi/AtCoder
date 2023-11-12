#include <bits/stdc++.h>
using namespace std;
typedef tuple<string, int, int> sii;

int main() {
  int N;
  cin >> N;
  vector<sii> sii(N);
  for (int i = 0; i < N; i++) {
    string s;
    int p;
    cin >> s >> p;
    sii[i] = make_tuple(s, 100 - p, i + 1);
  }

  sort(sii.begin(), sii.end());
  for (int i = 0; i < N; i++) {
    string x;
    int y, z;
    tie(x, y, z) = sii.at(i);
    cout << z << endl;
  }
}