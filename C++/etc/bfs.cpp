/**
 * filename: bfs.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/21/2024 20:24:22
 * result: 
 **/
#include <bits/stdc++.h>
using namespace std;

/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;

/* define short */
#define pb push_back
#define mp make_pair
#define SZ(x) ((int)(x).size())
#define bit(n) (1LL << (n))
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()

using Graph = vector<vector<int>>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // 頂点数と辺数
    int n, m;
    cin >> n >> m;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(n);
    rep (i, 0, m) {
        int a, b;
        cin >> a >> b;
        G[a].pb(b);
        G[b].pb(a);
    }

    // BFS のためのデータ構造
    vector<int> dist(n, -1); // 全頂点を「未訪問」に初期化（未訪問は-1）
    queue<int> que;

    // 初期条件 (頂点 0 を初期ノードとする)
    dist[0] = 0;
    que.push(0); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        // G: vector<vector<int>>
        for (int nv : G[v]) {
            cout << "v: " << v << " nv: " << nv << '\n';
            if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない

            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    // 結果出力 (各頂点の頂点 0 からの距離を見る)
    rep (v, 0, n) {
        cout << v << ": " << dist[v] << '\n';
    }

    return 0;
}

/* BFS (幅優先探索) 超入門！ 〜 キューを鮮やかに使いこなす 〜 */
// 記事: https://qiita.com/drken/items/996d80bcae64649a6580

