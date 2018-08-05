#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t, max = 0;
	cin >> t;
	while (t--) {
		int tmp, d[4];
		cin >> d[0] >> d[1] >> d[2] >> d[3];
		sort(d, d + 4);
		if (d[0] == d[3])
			tmp = 50000 + d[0] * 5000;
		else if (d[0] == d[2] || d[1] == d[3])
			tmp = 10000 + d[2] * 1000;
		else if (d[0] == d[1] && d[2] == d[3])
			tmp = 2000 + d[0] * 500 + d[2] * 500;
		else if (d[0] == d[1])
			tmp = 1000 + d[0] * 100;
		else if (d[2] == d[3])
			tmp = 1000 + d[2] * 100;
		else if (d[1] == d[2])
			tmp = 1000 + d[1] * 100;
		else
			tmp = d[3] * 100;
		if (max < tmp)
			max = tmp;
	}
	printf("%d\n", max);
}