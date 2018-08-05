#include <iostream>
using namespace std;
int main() {
	int a, b, revA, revB;
	cin >> a >> b;
	revA = ((a % 10) * 100) + ((a % 100 / 10) * 10) + (a / 100);
	revB = ((b % 10) * 100) + ((b % 100 / 10) * 10) + (b / 100);
	if (revA > revB)
		printf("%d\n", revA);
	else
		printf("%d\n", revB);
}