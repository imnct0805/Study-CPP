#include <iostream>
using namespace std;
int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		printf("%d %d\n", 2 * m - n, m - (2 * m - n));
	}
}