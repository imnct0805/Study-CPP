#include <iostream>
using namespace std;

int d[1001];
int sequence() {
	int idx = 1, cnt = 0;
	for (int i = 1; i < 1001; ++i) {
		for (int j = 1; j < i; j++) {
			d[idx++] = cnt;
			if (idx == 1001)	return 0;
		}
		cnt++;
	}
}

int main() {
	sequence();
	int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; ++i)
		sum += d[i];
	printf("%d\n", sum);
}