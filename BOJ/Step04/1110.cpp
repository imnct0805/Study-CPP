#include <iostream>
int main() {
	int n, res, cnt = 0;
	scanf("%d", &n);
	res = n;
	do {
		int one = res % 10;
		int two = res / 10;
		res = ((one + two) % 10) + (one * 10);
		cnt++;
	}while (n != res);
	printf("%d\n", cnt);
}