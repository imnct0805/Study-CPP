// 인접리스트 방식
// 시간복잡도 O(V+E) V 정점개수 / E 간선개수
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> edge;
vector<bool> visited;
int N, M;
int u, v;

void bfs(int cur) {
	queue<int> q;
	visited[cur] = true;
	q.push(cur);
	while (!q.empty()) {
		int here = q.front();
		q.pop();
		cout << here << ' ';
		for (int i = 0; i < edge[here].size(); ++i) {
			int there = edge[here][i];
			if (visited[there]) continue;
			visited[there] = true;
			q.push(there);
		}
	}
}

int main() {
	cin >> N >> M;
	edge.resize(N + 1);
	visited.resize(N + 1);
	for (int i = 0; i < M; ++i) {
		cin >> u >> v;
		edge[u].push_back(v);
	}
	bfs(1);
}
/*
Input
7 11
1 2
1 3
1 7
2 3
2 4
3 5
4 3
5 7
6 5
7 6
6 4 
Output
1 2 3 7 4 5 6
*/