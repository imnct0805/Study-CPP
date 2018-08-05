#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int d[7], res[7], cnt = 0, sum = -1;
	for (int i = 0; i < 7; ++i) {
		scanf("%d", &d[i]);
		if (d[i] % 2 == 1) {
			res[cnt++] = d[i];
			sum += d[i];
		}
	}
	sort(res, res + cnt);
	if (sum == -1)
		printf("-1");
	else
		printf("%d\n%d\n", sum + 1, res[0]);
}