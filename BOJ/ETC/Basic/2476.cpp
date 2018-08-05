#include <iostream>
using namespace std;
int main() {
	int t, tmp, max = 0;
	cin >> t;
	while (t--) {
		int d[3], cnt = 0;
		scanf("%d %d %d", &d[0], &d[1], &d[2]);
		if (d[0] == d[1])			cnt++;
		if (d[0] == d[2])			cnt++;
		if (d[1] == d[2])			cnt++;
		if (cnt == 3)
			tmp = 10000 + d[0] * 1000;
		else if (cnt == 1) {
			if (d[0] == d[1])
				tmp = 1000 + d[0] * 100;
			else
				tmp = 1000 + d[2] * 100;
		}
		else {
			int m = d[0];
			if (m < d[1])
				m = d[1];
			if (m < d[2])
				m = d[2];
			tmp = m * 100;
		}
		if (max < tmp)			max = tmp;
		printf("[%d] ", tmp);
	}
	printf("%d\n", max);
}