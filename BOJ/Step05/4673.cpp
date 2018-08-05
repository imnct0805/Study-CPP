#include <iostream>
bool idx[10001];
int solution(int n) {
	int sum = n;
	while (1) {
		if (n == 0)
			break;
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
	for (int i = 1; i < 10001; ++i) {
		int a = solution(i);
		if (a <= 10001) idx[a] = true;
	}
	for (int i = 1; i < 10001; ++i)
		if (!idx[i]) printf("%d\n", i);
}