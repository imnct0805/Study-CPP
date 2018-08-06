#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, d[1001];
	cin >> n;
	for (int i = 0; i < n; ++i)
		scanf("%d", &d[i]);
	sort(d, d + n);
	for (int i = 0; i < n; ++i)
		printf("%d\n", d[i]);
}