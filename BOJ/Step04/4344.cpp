#include <iostream>
int main() {
	int c;
	scanf("%d", &c);
	while (c--) {
		int n = 0, d[1001] = { 0, }, sum = 0, chk = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &d[i]);
			sum += d[i];
		}
		for (int i = 0; i < n; ++i)
			if (d[i] > (sum / n)) chk++;
		printf("%.3f%%\n", (double)chk / n * 100);
	}
}