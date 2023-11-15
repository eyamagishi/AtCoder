// AC(1): 40:30
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> A(m), B(m);
  for (int i = 0; i < m; i++) cin >> A.at(i) >> B.at(i);

  vector<vector<int>> UF(n + 1, vector<int>(0));
  for (int i = 0; i < m; i++) {
    UF.at(A.at(i)).push_back(B.at(i));
    UF.at(B.at(i)).push_back(A.at(i));
  }
  for (int i = 1; i < n + 1; i++) {
    int l = (int)UF.at(i).size();
    sort(UF.at(i).begin(), UF.at(i).end());
    cout << l;
    for(int j = 0; j < l; j++) cout << ' ' << UF.at(i).at(j);
    cout << endl;
  }
}
