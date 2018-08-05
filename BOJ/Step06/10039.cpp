#include <iostream>
int main() {
	int d[5], sum = 0;
	for (int i = 0; i < 5; ++i) {
		scanf("%d", &d[i]);
		if (d[i] < 40) d[i] = 40;
		sum += d[i];
	}
	printf("%d\n", sum / 5);
}