/**
 * filename: d.cpp
 * author: teniwoha
 * X: @RyutaUrushi
 * created: 10/19/2024 20:58:29
 * result: WA
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

vector<int> findShortestCycle(int N, const vector<vector<int>>& adj) {
    vector<int> dist(N + 1, INT_MAX);  // 各頂点への距離を保持する
    vector<int> parent(N + 1, -1);     // 各頂点の親を保持する
    queue<int> q;
    
    // 頂点1からBFSを開始
    q.push(1);
    dist[1] = 0;
    
    int min_cycle = INT_MAX;  // 最短閉路の長さを初期化
    vector<int> cycle_nodes;  // 最短閉路の経路を保持
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (dist[v] == INT_MAX) {
                // 未訪問の頂点の場合
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            } else if (v != parent[u]) {
                // 閉路が見つかった場合
                int cycle_length = dist[u] + dist[v] + 1;
                if (cycle_length < min_cycle) {
                    min_cycle = cycle_length;
                    // 閉路のノードを記録する
                    vector<int> tmp_cycle;
                    int cur = u;
                    while (cur != -1) {
                        tmp_cycle.push_back(cur);
                        cur = parent[cur];
                    }
                    reverse(tmp_cycle.begin(), tmp_cycle.end());
                    cur = v;
                    while (cur != -1) {
                        tmp_cycle.push_back(cur);
                        cur = parent[cur];
                    }
                    cycle_nodes = tmp_cycle;
                }
            }
        }
    }
    
    return cycle_nodes;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> adj(N + 1); // 隣接リスト

    // 辺の入力
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    // 閉路の検出
    vector<int> cycle = findShortestCycle(N, adj);

    if (cycle.empty()) {
        // 閉路が存在しない場合
        cout << -1 << endl;
    } else {
        // cout << cycle.size() - 1 << endl;
        cout << "閉路の長さ: " << cycle.size() << endl;
        cout << "閉路の経路: ";
        for (int node : cycle) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
