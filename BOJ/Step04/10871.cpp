#include <iostream>
int main() {
	int n, x, d[10001];
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &d[i]);
		if (x > d[i])
			printf("%d ", d[i]);
	}
}