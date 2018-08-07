// 인접 리스트 방식
// 시간 복잡도 O(V+E), V : 정점 개수 / E : 간선 개수
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> edge;
vector<bool> visited;
int N, M; // 정점 개수 N , 간선 개수 M
int u, v; // 시작정점 u, 도착정점 v

void dfs(int cur) {
	visited[cur] = true;
	cout << cur << ' ';
	for (int i = 0; i < edge[cur].size(); ++i) {
		int there = edge[cur][i];
		if (visited[there]) continue;
		dfs(there);
	}
}

int main() {
	cin >> N >> M;
	edge.resize(N + 1); 
	visited.resize(N + 1);
	for(int i = 0; i < M; ++i){
		cin >> u >> v;
		edge[u].push_back(v);
	}
	dfs(1);
}

/*
* Input *
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
* Output *
1 2 3 5 7 6 4
*/