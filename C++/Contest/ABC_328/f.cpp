// 未着手
#include <bits/stdc++.h>
using namespace std;

int main() {}

// 解説 by leaf1415
// #include <iostream>
// using namespace std;
// typedef long long ll;

// ll n, Q;
// ll parent[200001], weight[200001];

// int root(int i) {
// 	if(parent[i] == i) return i;
// 	int r = root(parent[i]);
// 	weight[i] = weight[parent[i]] + weight[i];
// 	return parent[i] = r;
// }
// bool unite(int i, int j, ll x) {
// 	int root_i = root(i), root_j = root(j);
// 	if(root_i == root_j) return weight[j]-weight[i] == x;
// 	parent[root_i] = root_j;
// 	weight[root_i] = weight[j]-weight[i]-x;
// 	return true;
// }

// int main() {
// 	cin >> n >> Q;
// 	for (int i = 1; i <= n; i++) parent[i] = i, weight[i] = 0;

// 	ll a, b, d;
// 	for (int i = 1; i <= Q; i++) {
// 		cin >> a >> b >> d;
// 		if (unite(a, b, d)) cout << i << " ";
// 	}

// 	cout << endl;
// 	return 0;
// }
