#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> k(m), p(m);
  vector<vector<int>> s(m);
  for (int i = 0; i < m; i++)
  {
    cin >> k.at(i);
    for (int j = 0; j < k.at(i); j++)
    {
      int tmp;
      cin >> tmp;
      s.at(i).push_back(tmp);
    }
  }
  for (int i = 0; i < m; i++) cin >> p.at(i);


  int ans = 0;
  for (int msk = 0; msk < (1 << n); msk++)
  {
    int ok = 0;
    for (int i = 0; i < m; i++)
    {
      int cnt = 0;
      for (int j = 0; j < k.at(i); j++)
      {
        if (msk & (1 << s.at(i).at(j) - 1)) cnt++;
      }
      if (cnt % 2 == p.at(i)) ok++;
    }
    if (ok == m) ans++;
  }


  cout << ans << endl;
}
