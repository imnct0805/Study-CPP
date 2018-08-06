#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		if((a + c) / 2 == b)
			printf("AP %d\n", c + (b - a));
		else if (b * b == a * c)
			printf("GP %d\n", c * (c / b));
	}
}