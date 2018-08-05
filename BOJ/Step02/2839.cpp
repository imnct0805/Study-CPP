#include <cstdio>
int main() {
	int n, res = -1;
	scanf("%d", &n);
	for (int i = 0; i * 5 <= n; ++i)
		if ((n - i * 5) % 3 == 0)
			res = i + (n - i * 5) / 3;
	printf("%d\n", res);
}