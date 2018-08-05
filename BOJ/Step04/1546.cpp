#include <iostream>
int main() {
	int n, d[1001], max = 0;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &d[i]);
		if (max < d[i])
			max = d[i];
	}
	for (int i = 0; i < n; ++i)
		sum += (double)d[i] / max * 100;
	printf("%.2f\n", sum / n);
}