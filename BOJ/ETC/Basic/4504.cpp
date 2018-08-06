#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, com;
	cin >> n;
	while (1) {
		cin >> com;
		if (com == 0)
			break;
		if (com % n == 0)
			printf("%d is a multiple of %d.\n", com, n);
		else
			printf("%d is NOT a multiple of %d.\n", com, n);
	}
}