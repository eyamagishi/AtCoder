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

vector<int> findSmallestCycle(int N, const vector<pair<int, int>>& edges) {
    vector<vector<int>> graph(N + 1);
    
    for (const auto& edge : edges) {
        graph[edge.first].push_back(edge.second);
    }
    
    int minCycleLength = N + 1;
    vector<int> minCycle;

    // 各ノードを起点にしてBFS
    for (int start = 1; start <= N; ++start) {
        vector<int> distance(N + 1, -1); // 各ノードへの距離を保持
        vector<int> parent(N + 1, -1);   // 親ノードを追跡する
        queue<int> q;
        
        q.push(start);
        distance[start] = 0;
        
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            
            for (int v : graph[u]) {
                if (distance[v] == -1) {
                    // 未訪問なら訪問して距離を更新
                    distance[v] = distance[u] + 1;
                    parent[v] = u;
                    q.push(v);
                } else if (parent[u] != v) {
                    // サイクルを見つけた場合、サイクルの長さを計算
                    int cycleLength = distance[u] + distance[v] + 1;
                    if (cycleLength < minCycleLength) {
                        minCycleLength = cycleLength;
                        
                        // サイクルを再構築する
                        vector<int> cycle;
                        int curU = u, curV = v;
                        cycle.push_back(curU);
                        while (curU != start) {
                            curU = parent[curU];
                            cycle.push_back(curU);
                        }
                        reverse(cycle.begin(), cycle.end());
                        cycle.push_back(curV);
                        while (curV != start) {
                            curV = parent[curV];
                            cycle.push_back(curV);
                        }
                        minCycle = cycle;
                    }
                }
            }
        }
    }

    if (minCycleLength == N + 1) {
        return {};
    }
    
    return minCycle;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> edges(M);
    for (int i = 0; i < M; ++i) {
        cin >> edges[i].first >> edges[i].second;
    }

    vector<int> cycle = findSmallestCycle(N, edges);

    if (cycle.empty()) {
        cout << -1 << endl;
    } else {
        cout << cycle.size() << endl;
    }

    return 0;
}
