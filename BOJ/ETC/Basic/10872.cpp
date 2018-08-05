#include <iostream>
using namespace std;
int main() {
	int n, sum = 1;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (n == 0)			sum = 0;
		else			sum *= i;
	}
	printf("%d\n", sum);
}