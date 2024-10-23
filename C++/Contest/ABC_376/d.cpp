/**
 * filename: d.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/19/2024 20:58:29
 * result: AC(3)
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

#define N 200005

/*
* ノードと0ノードとの距離を格納する
* x: ノード
* y: 0ノードとの距離
*/
struct info {
    int x, y;
};

// N 頂点 M 辺
int n, m;

// ノードを訪問済みとしてマークする
int vis[N];

// Graph
vector<int> g[N];

void bfs() {
    queue<info> q;
    q.push({1, 0});

    while (!q.empty()) {
        int u = q.front().x;
        int step = q.front().y;
        q.pop();

        // ノード1に戻ってきた場合、結果を出力して終了
        if (vis[u] && u == 1) {
            cout << step << '\n';
            return;
        }

        // すでに訪問済みのノードはスキップ
        if (vis[u]) {
            continue;
        }

        // ノードを訪問済みとしてマーク
        vis[u] = 1;

        // 接続されているノードをすべてキューに追加
        for (auto v : g[u]) {
            q.push({v, step + 1});
        }
    }

    // ノード1に戻る経路が見つからなかった場合
    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // N 頂点 M 辺
    cin >> n >> m;

    // グラフのエッジ情報を入力
    while (m--) {
        // 頂点aから頂点bへ伸びる辺
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    // 幅優先探索
    bfs();
    return 0;
}
