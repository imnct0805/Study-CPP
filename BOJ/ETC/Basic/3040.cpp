#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int d[10], sum = 0;
	for (int i = 0; i < 9; ++i) {
		scanf("%d", &d[i]);
		sum += d[i];
	}
	for (int i = 0; i < 9; ++i) {
		for (int j = i + 1; j < 9; ++j) {
			if (sum - (d[i] + d[j]) == 100) {
				d[i] = -1;
				d[j] = -1;
				break;
			}
		}
	}
	sort(d, d + 9);
	for (int i = 2; i < 9; ++i)
		printf("%d\n", d[i]);

}