#include <iostream>
using namespace std;
int main() {
	int m, i, j, init = 1;
	cin >> m;
	while (m--) {
		cin >> i >> j;
		if ((i == init))
			init = j;
		else if ((j == init))
			init = i;
	}
	printf("%d\n", init);
}