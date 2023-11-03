#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; // 都市の数
  int M; // 道路の数
  cin >> N >> M;
  vector<vector<int>> a(N + 1); // 配列が配列として入っている。入れ子
  for(int i = 0;i < M;i++){ // 要素の入力
    int u,v;
    cin >> u >> v;
    a[u - 1].push_back(v);
    a[v - 1].push_back(u);
  }
  for (int i = 0; i < N; ++i) {
    sort(begin(a[i]), end(a[i])); //要素を昇順
    cout << a[i].size(); //要素の大きさを出力
    for (int a : a[i]) { //for( int i = 0 ; i < a.size() ; i++ ) とも表記できる
      cout << ' ' << a;
    }
    cout << endl;
  }

  return 0;
}